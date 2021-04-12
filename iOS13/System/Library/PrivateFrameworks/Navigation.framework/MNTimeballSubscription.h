/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MNPlannedDestination *)destination;
-(id)jsonDictionary;
-(unsigned long long)refreshPolicy;
@end

