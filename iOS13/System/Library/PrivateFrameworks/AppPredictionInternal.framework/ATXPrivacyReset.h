/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSString;

@interface ATXPrivacyReset : NSObject {

	id _resetPrivacyWarningsNotificationToken;
	NSString* _basePath;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)initWithAppPredictionsBasePath:(id)arg1 ;
-(id)_placeholderPath;
-(BOOL)_placeholderExists;
-(void)_registerForResetPrivacyWarningsNotification;
-(void)_handlePrivacyResetNotification;
-(void)_writeDeletionPlaceholder;
-(void)_removeAllPredictionCaches;
-(void)_removeAllAppActionData;
@end

