/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setIsAbleToTakeScreenshots:(BOOL)arg1 ;
-(void)setReasonForNotBeingAbleToTakeScreenshots:(NSString *)arg1 ;
-(BOOL)isAbleToTakeScreenshots;
-(NSString *)reasonForNotBeingAbleToTakeScreenshots;
@end

