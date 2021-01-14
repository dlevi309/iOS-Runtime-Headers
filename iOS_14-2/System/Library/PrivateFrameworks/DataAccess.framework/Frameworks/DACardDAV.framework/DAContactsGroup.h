/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExternalIdentifier:(id)arg1 ;
-(BOOL)isContact;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(int)legacyIdentifier;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)externalIdentifier;
-(void)setETag:(id)arg1 ;
-(id)asGroup;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(BOOL)markedForDeletion;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(void)markForDeletion;
-(id)eTag;
-(id)initWithGroup:(id)arg1 ;
-(void*)asABGroup;
@end

