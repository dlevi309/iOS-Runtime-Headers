/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSResponse.h>

@class NSArray;

@interface TPSCellularNetworksResponse : TPSResponse {

	NSArray* _cellularNetworks;

}

@property (nonatomic,copy,readonly) NSArray * cellularNetworks;              //@synthesize cellularNetworks=_cellularNetworks - In the implementation block
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)archivedDataWithError:(id*)arg1 ;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 cellularNetworks:(id)arg3 ;
-(id)initWithSubscriptionContext:(id)arg1 error:(id)arg2 ;
-(NSArray *)cellularNetworks;
@end

