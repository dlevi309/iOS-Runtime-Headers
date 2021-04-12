/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/

#import <DACardDAV/DAGroup.h>

@class CNMutableGroup, NSString;

@interface DAContactsGroup : NSObject <DAGroup> {

	BOOL _markedForDeletion;
	CNMutableGroup* _group;

}

@property (nonatomic,readonly) CNMutableGroup * group;              //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) BOOL markedForDeletion;                //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNMutableGroup *)group;
-(id)initWithGroup:(id)arg1 ;
-(BOOL)isGroup;
-(BOOL)isContact;
-(int)legacyIdentifier;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(BOOL)isContainer;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(BOOL)markedForDeletion;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)asGroup;
-(id)eTag;
-(void)setETag:(id)arg1 ;
-(void*)asABGroup;
@end

