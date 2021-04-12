/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) int accountType; 
@property (nonatomic,retain) NSString * pathToConstraintsPlist; 
@property (assign,nonatomic) BOOL didChooseToMigrate; 
@property (nonatomic,readonly) BOOL preventMovingNotesToOtherAccounts; 
@property (nonatomic,readonly) BOOL isICloudIMAPAccount; 
+(BOOL)shouldDataAccessCreateAccountForACAccount:(id)arg1 ;
-(NSDictionary *)constraints;
-(int)accountType;
-(void)setAccountType:(int)arg1 ;
-(void)setConstraints:(NSDictionary *)arg1 ;
-(void)didTurnIntoFault;
-(void)willSave;
-(id)collectionInfo;
-(id)predicateForNotes;
-(BOOL)shouldMarkNotesAsDeleted;
-(id)storeForExternalId:(id)arg1 ;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)basicAccountIdentifier;
-(BOOL)isAllNotesContainer;
-(BOOL)preventMovingNotesToOtherAccounts;
-(void)setPathToConstraintsPlist:(NSString *)arg1 ;
-(NSString *)pathToConstraintsPlist;
-(BOOL)validateDefaultStore:(id*)arg1 error:(id*)arg2 ;
-(BOOL)isICloudIMAPAccount;
@end

