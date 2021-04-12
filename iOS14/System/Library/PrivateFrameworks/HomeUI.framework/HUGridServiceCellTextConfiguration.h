/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<HFStringGenerator>)descriptionText;
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(UIColor *)nameTextColor;
-(void)setNameTextColor:(UIColor *)arg1 ;
-(UIColor *)descriptionTextColor;
-(void)setDescriptionTextColor:(UIColor *)arg1 ;
-(UIVisualEffect *)descriptionTextEffect;
-(void)setDescriptionTextEffect:(UIVisualEffect *)arg1 ;
-(void)setNameComponents:(HFServiceNameComponents *)arg1 ;
-(HFServiceNameComponents *)nameComponents;
@end

