/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)UUID;
-(NSString *)displayName;
-(NSSet *)destinations;
-(void)setDestinations:(NSSet *)arg1 ;
-(id)contactStore;
-(ASRelationship *)relationship;
-(void)setContactStore:(id)arg1 ;
-(NSString *)fullName;
-(NSString *)shortName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setRelationship:(ASRelationship *)arg1 ;
-(void)setShortName:(NSString *)arg1 ;
-(BOOL)isEqualToContact:(id)arg1 ;
-(id)codableContactIncludingCloudKitFields:(BOOL)arg1 ;
-(NSString *)linkedContactStoreIdentifier;
-(void)setLinkedContactStoreIdentifier:(NSString *)arg1 ;
-(ASRelationship *)remoteRelationship;
-(void)setRemoteRelationship:(ASRelationship *)arg1 ;
-(id)_bestDestinationForContact:(id)arg1 ;
-(id)_bestDestinationFromKnownDestinations;
-(NSString *)primaryDestinationForMessaging;
@end

