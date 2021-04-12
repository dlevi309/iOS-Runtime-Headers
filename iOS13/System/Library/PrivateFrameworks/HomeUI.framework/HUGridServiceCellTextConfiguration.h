/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HFStringGenerator;
@class HFServiceNameComponents, UIColor, UIVisualEffect;

@interface HUGridServiceCellTextConfiguration : NSObject {

	HFServiceNameComponents* _nameComponents;
	id<HFStringGenerator> _descriptionText;
	UIColor* _nameTextColor;
	UIColor* _descriptionTextColor;
	UIVisualEffect* _descriptionTextEffect;

}

@property (nonatomic,retain) HFServiceNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,retain) id<HFStringGenerator> descriptionText;                 //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIColor * nameTextColor;                               //@synthesize nameTextColor=_nameTextColor - In the implementation block
@property (nonatomic,retain) UIColor * descriptionTextColor;                        //@synthesize descriptionTextColor=_descriptionTextColor - In the implementation block
@property (nonatomic,retain) UIVisualEffect * descriptionTextEffect;                //@synthesize descriptionTextEffect=_descriptionTextEffect - In the implementation block
-(HFServiceNameComponents *)nameComponents;
-(void)setNameComponents:(HFServiceNameComponents *)arg1 ;
-(id<HFStringGenerator>)descriptionText;
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(void)setDescriptionTextColor:(UIColor *)arg1 ;
-(UIColor *)nameTextColor;
-(void)setNameTextColor:(UIColor *)arg1 ;
-(UIColor *)descriptionTextColor;
-(UIVisualEffect *)descriptionTextEffect;
-(void)setDescriptionTextEffect:(UIVisualEffect *)arg1 ;
@end

