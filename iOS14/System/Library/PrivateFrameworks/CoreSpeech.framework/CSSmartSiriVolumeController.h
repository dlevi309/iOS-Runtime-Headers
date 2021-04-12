/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSSmartSiriVolumeClientDelegate.h>

@protocol CSSmartSiriVolumeControllerDelegate, OS_dispatch_queue;
@class NSObject, CSSmartSiriVolumeClient, NSString;

@interface CSSmartSiriVolumeController : NSObject <CSSmartSiriVolumeClientDelegate> {

	id<CSSmartSiriVolumeControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CSSmartSiriVolumeClient* _ssvClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSSmartSiriVolumeClient * ssvClient;                                  //@synthesize ssvClient=_ssvClient - In the implementation block
@property (assign,nonatomic,__weak) id<CSSmartSiriVolumeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CSSmartSiriVolumeControllerDelegate>)delegate;
-(void)setDelegate:(id<CSSmartSiriVolumeControllerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)didSmartSiriVolumeChangeForReason:(unsigned long long)arg1 ;
-(id)getVolumeForTTSType:(unsigned long long)arg1 withContext:(id)arg2 ;
-(void)_createSSVClientConnectionIfNeeded;
-(CSSmartSiriVolumeClient *)ssvClient;
-(void)setSsvClient:(CSSmartSiriVolumeClient *)arg1 ;
@end

