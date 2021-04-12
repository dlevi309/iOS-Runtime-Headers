/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/

#import <DACardDAV/DAContact.h>

@class NSString;

@interface DAABLegacyContact : NSObject <DAContact> {

	void* _person;

}

@property (nonatomic,readonly) void* person;                        //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isGroup;
-(BOOL)isContact;
-(int)legacyIdentifier;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(void*)person;
-(BOOL)isContainer;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)asContact;
-(id)eTag;
-(void)setETag:(id)arg1 ;
-(id)initWithABPerson:(void*)arg1 ;
-(void*)asPerson;
@end

