/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CNContactStore, NSString, NSSet, ASRelationship, NSUUID;

@interface ASContact : NSObject <NSCopying> {

	CNContactStore* _contactStore;
	NSString* _linkedContactStoreIdentifier;
	NSString* _fullName;
	NSString* _shortName;
	NSSet* _destinations;
	ASRelationship* _relationship;
	ASRelationship* _remoteRelationship;

}

@property (nonatomic,readonly) NSUUID * UUID; 
@property (nonatomic,copy) NSString * linkedContactStoreIdentifier;                         //@synthesize linkedContactStoreIdentifier=_linkedContactStoreIdentifier - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                             //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy) NSString * shortName;                                            //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy) NSSet * destinations;                                            //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,copy) ASRelationship * relationship;                                   //@synthesize relationship=_relationship - In the implementation block
@property (nonatomic,copy) ASRelationship * remoteRelationship;                             //@synthesize remoteRelationship=_remoteRelationship - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryDestinationForMessaging; 
+(id)contactWithCodableContact:(id)arg1 ;
-(void)setContactStore:(id)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(BOOL)isEqualToContact:(id)arg1 ;
-(id)contactStore;
-(NSString *)fullName;
-(NSUUID *)UUID;
-(id)init;
-(ASRelationship *)relationship;
-(void)setDestinations:(NSSet *)arg1 ;
-(NSSet *)destinations;
-(NSString *)shortName;
-(void)setRelationship:(ASRelationship *)arg1 ;
-(id)description;
-(void)setShortName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(id)codableContactIncludingCloudKitFields:(BOOL)arg1 ;
-(NSString *)linkedContactStoreIdentifier;
-(void)setLinkedContactStoreIdentifier:(NSString *)arg1 ;
-(ASRelationship *)remoteRelationship;
-(void)setRemoteRelationship:(ASRelationship *)arg1 ;
-(id)contactWithKeys:(id)arg1 ;
-(id)_bestDestinationForContact:(id)arg1 ;
-(id)_bestDestinationFromKnownDestinations;
-(NSString *)primaryDestinationForMessaging;
@end

