/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <Notes/NoteCollectionObject.h>

@class NSDictionary, NSNumber, NSString, NSSet, NoteStoreObject;

@interface NoteAccountObject : NoteCollectionObject {

	NSDictionary* _constraints;
	NSNumber* _preventMovingNotesToOtherAccounts;

}

@property (nonatomic,retain) NSNumber * type; 
@property (nonatomic,retain) NSString * constraintsPath; 
@property (nonatomic,retain) NSDictionary * constraints;                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSString * accountIdentifier; 
@property (nonatomic,retain) NSSet * stores; 
@property (nonatomic,retain) NoteStoreObject * defaultStore; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) long long accountType; 
@property (nonatomic,retain) NSString * pathToConstraintsPlist; 
@property (assign,nonatomic) BOOL didChooseToMigrate; 
@property (nonatomic,readonly) BOOL preventMovingNotesToOtherAccounts; 
@property (nonatomic,readonly) BOOL isICloudIMAPAccount; 
+(BOOL)shouldDataAccessCreateAccountForACAccount:(id)arg1 ;
-(long long)accountType;
-(NSDictionary *)constraints;
-(id)collectionInfo;
-(void)willSave;
-(void)setConstraints:(NSDictionary *)arg1 ;
-(BOOL)isAllNotesContainer;
-(BOOL)validateDefaultStore:(id*)arg1 error:(id*)arg2 ;
-(void)setPathToConstraintsPlist:(NSString *)arg1 ;
-(BOOL)preventMovingNotesToOtherAccounts;
-(id)predicateForNotes;
-(BOOL)shouldMarkNotesAsDeleted;
-(id)searchDomainIdentifier;
-(NSString *)pathToConstraintsPlist;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)isICloudIMAPAccount;
-(id)storeForExternalId:(id)arg1 ;
-(void)setAccountType:(long long)arg1 ;
-(void)didTurnIntoFault;
-(id)basicAccountIdentifier;
@end

