/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedListenerIfExists;
+(id)sharedListener;
-(void)startListening;
-(void)stopListening;
-(id)init;
-(void)_spokenLanguageChanged:(id)arg1 ;
-(void)_enqueueRequest:(id)arg1 ;
-(id)_initShared;
-(void)_flush;
-(void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2 ;
-(void)dealloc;
@end

