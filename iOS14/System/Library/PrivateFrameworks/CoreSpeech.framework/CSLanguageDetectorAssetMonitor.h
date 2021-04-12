/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNotifyToken:(int)arg1 ;
-(id)init;
-(id<CSLanguageDetectorAssetMonitorDelegate>)delegate;
-(int)notifyToken;
-(void)setDelegate:(id<CSLanguageDetectorAssetMonitorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_supportedLocale:(/*^block*/id)arg1 ;
-(void)startMonitor;
-(void)supportedLocale:(/*^block*/id)arg1 ;
@end

