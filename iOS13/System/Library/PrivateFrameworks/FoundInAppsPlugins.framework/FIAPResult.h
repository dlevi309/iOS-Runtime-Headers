/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FoundInAppsPlugins.framework/FoundInAppsPlugins
*/

#import <FoundInAppsPlugins/FoundInAppsPlugins-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSError;

@interface FIAPResult : NSObject <NSSecureCoding> {

	NSArray* _historicalDataRequests;
	NSError* _error;

}

@property (nonatomic,readonly) NSArray * historicalDataRequests;              //@synthesize historicalDataRequests=_historicalDataRequests - In the implementation block
@property (nonatomic,readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)success;
+(id)resultWithHistoricalDataRequests:(id)arg1 error:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSArray *)historicalDataRequests;
-(id)initWithHistoricalDataRequests:(id)arg1 error:(id)arg2 ;
-(BOOL)isEqualToResult:(id)arg1 ;
@end

