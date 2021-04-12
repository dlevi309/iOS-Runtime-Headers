/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/

#import <DACardDAV/DAContact.h>

@class CNMutableContact, NSString;

@interface DAContactsContact : NSObject <DAContact> {

	BOOL _markedForDeletion;
	CNMutableContact* _mutableContact;

}

@property (nonatomic,readonly) CNMutableContact * mutableContact;              //@synthesize mutableContact=_mutableContact - In the implementation block
@property (assign,nonatomic) BOOL markedForDeletion;                           //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isGroup;
-(BOOL)isContact;
-(int)legacyIdentifier;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(CNMutableContact *)mutableContact;
-(BOOL)isContainer;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(BOOL)markedForDeletion;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)asContact;
-(id)eTag;
-(void)setETag:(id)arg1 ;
-(void*)asPerson;
@end

