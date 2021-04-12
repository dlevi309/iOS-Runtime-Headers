/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface FAPropertyEligibilityRequirements : NSObject <NSSecureCoding> {

	BOOL _hasRecommendedMembers;
	BOOL _serverEligibility;
	NSString* _propertyName;
	NSString* _expectedMediaAltDSID;
	NSArray* _activeBundleIDs;
	id _serverPayload;

}

@property (nonatomic,copy,readonly) NSString * propertyName;                      //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,readonly) BOOL hasRecommendedMembers;                        //@synthesize hasRecommendedMembers=_hasRecommendedMembers - In the implementation block
@property (nonatomic,copy,readonly) NSString * expectedMediaAltDSID;              //@synthesize expectedMediaAltDSID=_expectedMediaAltDSID - In the implementation block
@property (nonatomic,readonly) BOOL serverEligibility;                            //@synthesize serverEligibility=_serverEligibility - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeBundleIDs;                    //@synthesize activeBundleIDs=_activeBundleIDs - In the implementation block
@property (nonatomic,readonly) id serverPayload;                                  //@synthesize serverPayload=_serverPayload - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPropertyName:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(id)serverPayload;
-(NSString *)expectedMediaAltDSID;
-(BOOL)serverEligibility;
-(NSArray *)activeBundleIDs;
-(id)initWithPropertyName:(id)arg1 hasRecommendedMembers:(BOOL)arg2 expectedMediaAltDSID:(id)arg3 serverEligibility:(BOOL)arg4 activeBundleIDs:(id)arg5 serverPayload:(id)arg6 ;
-(BOOL)hasRecommendedMembers;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)propertyName;
@end

