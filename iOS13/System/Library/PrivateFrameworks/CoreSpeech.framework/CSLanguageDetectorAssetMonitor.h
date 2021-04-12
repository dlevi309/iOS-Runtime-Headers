/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSLanguageDetectorAssetMonitorDelegate, OS_dispatch_queue;
@class NSObject;

@interface CSLanguageDetectorAssetMonitor : NSObject {

	int _notifyToken;
	id<CSLanguageDetectorAssetMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) int notifyToken;                                                         //@synthesize notifyToken=_notifyToken - In the implementation block
@property (assign,nonatomic,__weak) id<CSLanguageDetectorAssetMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)notifyToken;
-(id<CSLanguageDetectorAssetMonitorDelegate>)delegate;
-(void)setDelegate:(id<CSLanguageDetectorAssetMonitorDelegate>)arg1 ;
-(void)setNotifyToken:(int)arg1 ;
-(void)_supportedLocale:(/*^block*/id)arg1 ;
-(void)startMonitor;
-(void)supportedLocale:(/*^block*/id)arg1 ;
@end

