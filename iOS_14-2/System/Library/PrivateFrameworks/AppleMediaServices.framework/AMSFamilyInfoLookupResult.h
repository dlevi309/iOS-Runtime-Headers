/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSArray, NSDictionary;

@interface AMSFamilyInfoLookupResult : NSObject {

	BOOL _cached;
	BOOL _headOfHouseholdSharingPayment;
	NSArray* _familyMembers;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (getter=isCached,nonatomic,readonly) BOOL cached;                                                            //@synthesize cached=_cached - In the implementation block
@property (nonatomic,readonly) NSArray * familyMembers;                                                                //@synthesize familyMembers=_familyMembers - In the implementation block
@property (getter=isHeadOfHouseholdSharingPayment,nonatomic,readonly) BOOL headOfHouseholdSharingPayment;              //@synthesize headOfHouseholdSharingPayment=_headOfHouseholdSharingPayment - In the implementation block
+(id)_familyMembersFromDictionaryRepresentation:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isCached;
-(BOOL)isHeadOfHouseholdSharingPayment;
-(id)initWithDictionaryRepresentation:(id)arg1 cached:(BOOL)arg2 ;
-(id)description;
-(NSArray *)familyMembers;
@end

