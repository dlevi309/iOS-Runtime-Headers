/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSMutableArray, NSUUID, NSData, NSArray, WBSPair, NSDictionary;

@interface WBSPasswordBreachQueuedPassword : NSObject {

	NSMutableArray* _bucketIdentifierAndHashStack;
	NSUUID* _uuid;
	NSData* _highFrequencyEncodedPassword;
	NSArray* _persistentIdentifiers;

}

@property (nonatomic,readonly) NSArray * persistentIdentifiers;                        //@synthesize persistentIdentifiers=_persistentIdentifiers - In the implementation block
@property (nonatomic,readonly) WBSPair * topBucketIdentiferAndHash; 
@property (nonatomic,readonly) unsigned long long remainingHashCount; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * highFrequencyEncodedPasswordData; 
@property (nonatomic,readonly) NSUUID * uuid; 
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSUUID *)uuid;
-(NSData *)highFrequencyEncodedPasswordData;
-(WBSPair *)topBucketIdentiferAndHash;
-(NSArray *)persistentIdentifiers;
-(id)description;
-(id)initFakePasswordWithContext:(id)arg1 ;
-(id)initWithCredentials:(id)arg1 context:(id)arg2 ;
-(void)removeTopBucketIdentifierAndHash;
-(void)pushBucketIdentifiersAndHashesFromQueuedPassword:(id)arg1 ;
-(unsigned long long)remainingHashCount;
@end

