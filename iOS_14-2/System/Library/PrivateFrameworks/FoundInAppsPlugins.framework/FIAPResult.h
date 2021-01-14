/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)success;
+(BOOL)supportsSecureCoding;
+(id)resultWithHistoricalDataRequests:(id)arg1 error:(id)arg2 ;
-(id)init;
-(BOOL)isEqualToResult:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithHistoricalDataRequests:(id)arg1 error:(id)arg2 ;
-(NSError *)error;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)historicalDataRequests;
-(BOOL)isEqual:(id)arg1 ;
@end

