/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class NSString;


@protocol _SFMediaRecordingDocument
@property (nonatomic,readonly) BOOL canOverrideStatusBar; 
@property (nonatomic,readonly) BOOL audioOnly; 
@property (nonatomic,readonly) NSString * URLString; 
@required
-(NSString *)URLString;
-(BOOL)audioOnly;
-(BOOL)canOverrideStatusBar;
-(void)muteMediaCapture;
-(void)statusBarIndicatorTappedWithCompletionHandler:(/*^block*/id)arg1;

@end

