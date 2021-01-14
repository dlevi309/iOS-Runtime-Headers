/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <ActionPredictionHeuristicsInternal/ActionPredictionHeuristicsInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface ATXHeuristicCacheExpirer : NSObject <NSSecureCoding> {

	NSMutableSet* _expirationEntries;
	opaque_pthread_mutex_t _lock;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_start;
-(void)_stop;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)expire;
-(void)startExpiring:(id)arg1 cache:(id)arg2 ;
-(void)stopExpiring:(id)arg1 cache:(id)arg2 ;
@end

