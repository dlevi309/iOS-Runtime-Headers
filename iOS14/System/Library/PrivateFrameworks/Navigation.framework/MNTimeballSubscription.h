/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNJSONOutput.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MNPlannedDestination, NSString;

@interface MNTimeballSubscription : NSObject <MNJSONOutput, NSCopying, NSSecureCoding> {

	MNPlannedDestination* _destination;
	long long _options;
	unsigned long long _refreshPolicy;

}

@property (nonatomic,copy,readonly) MNPlannedDestination * destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) long long options;                                    //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long refreshPolicy;                     //@synthesize refreshPolicy=_refreshPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)subscriptionForDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(long long)options;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)jsonDictionary;
-(MNPlannedDestination *)destination;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)refreshPolicy;
@end

