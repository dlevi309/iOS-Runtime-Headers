/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNCacheBoundingStrategy.h>

@protocol CNTimeProvider;
@class NSMutableDictionary, NSString;

@interface _CNCacheFixedTTLBoundingStrategy : NSObject <CNCacheBoundingStrategy> {

	double _ttl;
	unsigned long long _renewalOptions;
	id<CNTimeProvider> _timeProvider;
	NSMutableDictionary* _timestamps;

}

@property (nonatomic,readonly) double ttl;                                     //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,readonly) unsigned long long renewalOptions;              //@synthesize renewalOptions=_renewalOptions - In the implementation block
@property (nonatomic,readonly) id<CNTimeProvider> timeProvider;                //@synthesize timeProvider=_timeProvider - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * timestamps;               //@synthesize timestamps=_timestamps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableDictionary *)timestamps;
-(NSString *)description;
-(id)initWithTTL:(double)arg1 renewalOptions:(unsigned long long)arg2 timeProvider:(id)arg3 ;
-(BOOL)shouldEvictKey:(id)arg1 ;
-(void)updateTimestampForKey:(id)arg1 ;
-(void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id*)arg3 ;
-(void)willAccessKey:(id)arg1 ;
-(unsigned long long)renewalOptions;
-(double)ttl;
-(id)initWithTTL:(double)arg1 ;
-(id<CNTimeProvider>)timeProvider;
@end

