/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSMutableSet, SGRecordId, SGContactDetailsHolder, NSString;

@interface SGStorageContact : NSObject {

	NSMutableSet* _profiles;
	long long _masterEntityId;
	SGRecordId* _recordId;
	SGContactDetailsHolder* _internalDetectedDetails;

}

@property (retain) SGContactDetailsHolder * internalDetectedDetails;              //@synthesize internalDetectedDetails=_internalDetectedDetails - In the implementation block
@property (nonatomic,readonly) long long masterEntityId;                          //@synthesize masterEntityId=_masterEntityId - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) SGRecordId * recordId;                             //@synthesize recordId=_recordId - In the implementation block
+(id)mergeAll:(id)arg1 ;
+(void)subtractDetailsFromSGContact:(id)arg1 thatMatchCNContact:(id)arg2 ;
+(id)contactWithMasterEntityId:(long long)arg1 ;
+(id)contactFromContactEntity:(id)arg1 ;
-(id)profiles;
-(void)merge:(id)arg1 ;
-(SGRecordId *)recordId;
-(BOOL)hasProfileFromTextMessage;
-(BOOL)isEqualToStorageContact:(id)arg1 ;
-(id)convertToContact:(id)arg1 ;
-(id)init;
-(id)loadAllDetailsFrom:(id)arg1 ;
-(id)loadAddressDetailsFrom:(id)arg1 ;
-(BOOL)canMerge:(id)arg1 ;
-(void)setInternalDetectedDetails:(SGContactDetailsHolder *)arg1 ;
-(NSString *)name;
-(id)description;
-(id)bestProfile;
-(id)loadPhoneDetailsFrom:(id)arg1 ;
-(id)allNames;
-(void)reload;
-(id)convertToContact:(id)arg1 sourceEntity:(id)arg2 enrichments:(id)arg3 ;
-(long long)masterEntityId;
-(unsigned long long)hash;
-(SGContactDetailsHolder *)internalDetectedDetails;
-(void)addProfile:(id)arg1 ;
-(id)loadBirthdayDetailsFrom:(id)arg1 ;
-(BOOL)hasProfileFromInteraction;
-(id)loadEmailAddressDetailsFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

