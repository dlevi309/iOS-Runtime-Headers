/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class NSString;

@interface SSScreenCaptureAbilityCheck : NSObject {

	BOOL _isAbleToTakeScreenshots;
	NSString* _reasonForNotBeingAbleToTakeScreenshots;

}

@property (assign,nonatomic) BOOL isAbleToTakeScreenshots;                                 //@synthesize isAbleToTakeScreenshots=_isAbleToTakeScreenshots - In the implementation block
@property (nonatomic,copy) NSString * reasonForNotBeingAbleToTakeScreenshots;              //@synthesize reasonForNotBeingAbleToTakeScreenshots=_reasonForNotBeingAbleToTakeScreenshots - In the implementation block
+(id)abilityCheck;
-(BOOL)isAbleToTakeScreenshots;
-(NSString *)reasonForNotBeingAbleToTakeScreenshots;
-(void)setIsAbleToTakeScreenshots:(BOOL)arg1 ;
-(void)setReasonForNotBeingAbleToTakeScreenshots:(NSString *)arg1 ;
@end

