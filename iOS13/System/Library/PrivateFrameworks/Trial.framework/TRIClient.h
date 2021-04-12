/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/TRIFactorProviding.h>

@class TRIDefaultFactorProvider, TRILogger, _PASLock, TRITrackingId, NSString;

@interface TRIClient : NSObject <TRIFactorProviding> {

	TRIDefaultFactorProvider* _defaultFactorProvider;
	int _projectId;
	TRILogger* _trialDevLogger;
	_PASLock* _lock;
	TRILogger* _logger;

}

@property (readonly) TRITrackingId * trackingId; 
@property (readonly) TRILogger * logger;                            //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientWithIdentifier:(int)arg1 ;
+(id)clientWithIdentifier:(int)arg1 unit:(int)arg2 ;
-(void)dealloc;
-(TRILogger *)logger;
-(id)addUpdateHandlerForNamespaceId:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)newTrackingId;
-(id)experimentIdWithNamespace:(unsigned)arg1 ;
-(id)treatmentIdWithNamespace:(unsigned)arg1 ;
-(id)levelForFactor:(id)arg1 withNamespace:(unsigned)arg2 ;
-(TRITrackingId *)trackingId;
-(id)initWithClientIdentifier:(int)arg1 unit:(int)arg2 ;
-(void)_deregisterUpdateHandlers;
-(id)newTrackingIdWithTreatmentRefresh:(BOOL)arg1 ;
-(void)_invalidateNamespacesWithGuardedData:(id)arg1 ;
-(void)_registerUpdateHandlerForNamespaceId:(unsigned)arg1 ;
-(id)addUpdateHandlerForNamespaceId:(unsigned)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeUpdateHandler:(id)arg1 ;
-(void)_handleNamespaceUpdate:(unsigned)arg1 ;
@end

