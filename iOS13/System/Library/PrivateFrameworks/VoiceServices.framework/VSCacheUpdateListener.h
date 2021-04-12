/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@class NSLock, NSMutableArray, NSDictionary, NSTimer;

@interface VSCacheUpdateListener : NSObject {

	NSLock* _lock;
	NSMutableArray* _updateRequestQueue;
	NSDictionary* _dataProviders;
	NSTimer* _flushTimer;
	BOOL _isListening;

}
+(id)sharedListener;
+(id)sharedListenerIfExists;
-(id)init;
-(void)dealloc;
-(id)_initShared;
-(void)_flush;
-(void)startListening;
-(void)stopListening;
-(void)_enqueueRequest:(id)arg1 ;
-(void)_spokenLanguageChanged:(id)arg1 ;
-(void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2 ;
@end

