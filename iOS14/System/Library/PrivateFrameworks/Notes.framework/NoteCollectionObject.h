/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICNoteVisibilityTesting.h>

@class NSNumber, NSString;

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting> {

	NSNumber* transientNoteCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isAllNotesContainer; 
@property (nonatomic,retain) NSNumber * transientNoteCount; 
-(id)collectionInfo;
-(BOOL)isAllNotesContainer;
-(id)predicateForNotes;
-(id)searchDomainIdentifier;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(NSNumber *)transientNoteCount;
-(void)setTransientNoteCount:(NSNumber *)arg1 ;
-(id)basicAccountIdentifier;
@end

