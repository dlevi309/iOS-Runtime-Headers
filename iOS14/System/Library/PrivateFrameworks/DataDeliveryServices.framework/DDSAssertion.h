/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <DataDeliveryServices/DataDeliveryServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, DDSAssetQuery, NSMutableSet, DDSAssetPolicy, NSSet;

@interface DDSAssertion : NSObject <NSSecureCoding, NSCopying> {

	NSString* _description;
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
-(NSDate *)lastUpdated;
-(DDSAssetQuery *)query;
-(void)setDescriptors:(NSMutableSet *)arg1 ;
-(NSMutableSet *)descriptors;
-(id)init;
-(DDSAssetPolicy *)policy;
-(void)invalidateDescription;
-(BOOL)isEqualToAssertion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(id)description;
-(NSSet *)clientIdentifiers;
-(void)addDescriptorWithAssertionID:(id)arg1 clientID:(id)arg2 policy:(id)arg3 ;
-(id)initWithQuery:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)assertionIdentifiers;
-(void)removeDescriptorWithAssertionID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)assertionIDsForClientID:(id)arg1 ;
-(void)removeDescriptorWithClientID:(id)arg1 ;
@end

