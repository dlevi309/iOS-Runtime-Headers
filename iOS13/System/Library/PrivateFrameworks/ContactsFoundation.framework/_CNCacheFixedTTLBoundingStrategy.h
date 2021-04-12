/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNCacheBoundingStrategy.h>

@protocol CNTimeProvider;
@class NSMutableDictionary, NSString;

@interface _CNCacheFixedTTLBoundingStrategy : NSObject <CNCacheBoundingStrategy> {

	double _ttl;
	id<CNTimeProvider> _timeProvider;
	NSMutableDictionary* _timestamps;

}

@property (nonatomic,readonly) double ttl;                                    //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,readonly) id<CNTimeProvider> timeProvider;               //@synthesize timeProvider=_timeProvider - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * timestamps;              //@synthesize timestamps=_timestamps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(NSMutableDictionary *)timestamps;
-(double)ttl;
-(id)initWithTTL:(double)arg1 ;
-(id)initWithTTL:(double)arg1 timeProvider:(id)arg2 ;
-(BOOL)shouldEvictKey:(id)arg1 ;
-(id<CNTimeProvider>)timeProvider;
-(void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id*)arg3 ;
-(void)willAccessKey:(id)arg1 ;
@end

