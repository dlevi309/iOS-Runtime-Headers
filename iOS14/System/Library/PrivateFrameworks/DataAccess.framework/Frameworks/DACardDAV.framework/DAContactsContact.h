/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExternalIdentifier:(id)arg1 ;
-(BOOL)isContact;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(int)legacyIdentifier;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)externalIdentifier;
-(CNMutableContact *)mutableContact;
-(void)setETag:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(BOOL)markedForDeletion;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(void)markForDeletion;
-(id)eTag;
-(void*)asPerson;
-(id)asContact;
@end

