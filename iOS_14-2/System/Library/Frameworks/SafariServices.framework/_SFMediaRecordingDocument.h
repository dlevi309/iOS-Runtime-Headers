/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

