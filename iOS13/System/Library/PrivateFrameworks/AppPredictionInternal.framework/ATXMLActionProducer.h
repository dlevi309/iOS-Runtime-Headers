/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXActionProducer.h>

@protocol ATXActionProducerDelegate;
@class NSString, ATXInternalActionPredictionUpdateNotification, ATXUpdatePredictionsLogger;

@interface ATXMLActionProducer : NSObject <ATXActionProducer> {

	NSString* _cacheBasePath;
	NSString* _cacheFilename;
	ATXInternalActionPredictionUpdateNotification* _updateNotification;
	ATXUpdatePredictionsLogger* _updatePredictionsLogger;
	id<ATXActionProducerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATXActionProducerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<ATXActionProducerDelegate>)delegate;
-(void)setDelegate:(id<ATXActionProducerDelegate>)arg1 ;
-(id)_cachePath;
-(void)invalidateWithReason:(unsigned long long)arg1 ;
-(id)produceActions;
-(id)_getActionsFromCache;
-(BOOL)_shouldInvalidateCacheWithTTL:(double)arg1 ;
-(BOOL)_writeIntermediateCache;
@end

