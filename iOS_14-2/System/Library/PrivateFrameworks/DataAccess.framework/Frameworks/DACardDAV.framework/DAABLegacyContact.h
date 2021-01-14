/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void*)person;
-(void)setExternalIdentifier:(id)arg1 ;
-(BOOL)isContact;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(int)legacyIdentifier;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)externalIdentifier;
-(void)setETag:(id)arg1 ;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(void)markForDeletion;
-(id)eTag;
-(void*)asPerson;
-(void)dealloc;
-(id)asContact;
-(id)initWithABPerson:(void*)arg1 ;
@end

