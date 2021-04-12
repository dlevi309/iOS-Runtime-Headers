/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@class NSString, NSPersonNameComponents;

@interface PHShareParticipant : PHObject {

	BOOL _isCurrentUser;
	unsigned short _role;
	short _permission;
	short _acceptanceStatus;
	NSString* _emailAddress;
	NSPersonNameComponents* _nameComponents;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) unsigned short role;                                       //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) short permission;                                          //@synthesize permission=_permission - In the implementation block
@property (nonatomic,readonly) short acceptanceStatus;                                    //@synthesize acceptanceStatus=_acceptanceStatus - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentUser;                                        //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (nonatomic,copy,readonly) NSString * emailAddress;                              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy,readonly) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(id)entityKeyMap;
+(void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)fetchContributorForAsset:(id)arg1 options:(id)arg2 ;
+(id)identifierCode;
+(id)fetchType;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchParticipantsInShare:(id)arg1 options:(id)arg2 ;
+(id)fetchParticipantsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
-(BOOL)isCurrentUser;
-(NSString *)emailAddress;
-(short)acceptanceStatus;
-(NSString *)phoneNumber;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(unsigned long long)hash;
-(unsigned short)role;
-(short)permission;
-(NSPersonNameComponents *)nameComponents;
-(BOOL)isEqual:(id)arg1 ;
@end

