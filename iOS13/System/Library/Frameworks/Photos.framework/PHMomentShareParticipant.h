/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@class NSString, NSPersonNameComponents;

@interface PHMomentShareParticipant : PHObject {

	unsigned short _type;
	NSString* _emailAddress;
	NSPersonNameComponents* _nameComponents;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) unsigned short type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * emailAddress;                              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy,readonly) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchParticipantsInMomentShare:(id)arg1 options:(id)arg2 ;
+(id)fetchParticipantsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned short)type;
-(NSString *)phoneNumber;
-(NSString *)emailAddress;
-(NSPersonNameComponents *)nameComponents;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
@end

