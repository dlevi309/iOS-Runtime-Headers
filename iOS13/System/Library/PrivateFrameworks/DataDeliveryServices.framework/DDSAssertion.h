/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <DataDeliveryServices/DataDeliveryServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, DDSAssetQuery, NSMutableSet, DDSAssetPolicy, NSSet;

@interface DDSAssertion : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _lastUpdated;
	DDSAssetQuery* _query;
	NSMutableSet* _descriptors;

}

@property (nonatomic,retain) NSMutableSet * descriptors;                  //@synthesize descriptors=_descriptors - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                        //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,readonly) DDSAssetQuery * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) DDSAssetPolicy * policy; 
@property (nonatomic,readonly) NSSet * assertionIdentifiers; 
@property (nonatomic,readonly) NSSet * clientIdentifiers; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DDSAssetQuery *)query;
-(DDSAssetPolicy *)policy;
-(id)initWithQuery:(id)arg1 ;
-(NSMutableSet *)descriptors;
-(void)setDescriptors:(NSMutableSet *)arg1 ;
-(NSDate *)lastUpdated;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSSet *)clientIdentifiers;
-(id)assertionIDsForClientID:(id)arg1 ;
-(BOOL)isEqualToAssertion:(id)arg1 ;
-(void)addDescriptorWithAssertionID:(id)arg1 clientID:(id)arg2 policy:(id)arg3 ;
-(NSSet *)assertionIdentifiers;
-(void)removeDescriptorWithClientID:(id)arg1 ;
-(void)removeDescriptorWithAssertionID:(id)arg1 ;
@end

