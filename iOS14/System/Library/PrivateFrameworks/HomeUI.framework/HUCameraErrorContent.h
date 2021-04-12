/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSString;

@interface HUCameraErrorContent : NSObject {

	NSString* _titleText;
	NSString* _descriptionText;

}

@property (nonatomic,copy) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
+(id)errorWithTitle:(id)arg1 description:(id)arg2 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
@end

