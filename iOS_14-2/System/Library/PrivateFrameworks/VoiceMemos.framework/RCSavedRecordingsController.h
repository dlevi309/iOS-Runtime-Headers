/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <CoreData/NSFetchedResultsController.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSFetchedResultsControllerDelegate, RCFolder;
@class NSFetchRequest, NSPredicate, NSString, NSArray;

@interface RCSavedRecordingsController : NSFetchedResultsController <NSCopying> {

	NSFetchRequest* _fetchRequest;
	NSPredicate* _fetchPredicate;
	NSString* _searchString;
	id<NSFetchedResultsControllerDelegate> _defaultDelegate;
	BOOL _hasPerformedFetch;
	id<RCFolder> _folder;

}

@property (nonatomic,readonly) NSPredicate * fetchPredicate;                                             //@synthesize fetchPredicate=_fetchPredicate - In the implementation block
@property (assign,nonatomic,__weak) id<RCFolder> folder;                                                 //@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic,__weak) id<NSFetchedResultsControllerDelegate> defaultDelegate;              //@synthesize defaultDelegate=_defaultDelegate - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                                      //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) NSArray * fetchedRecordings; 
-(id)fetchedObjects;
-(NSArray *)fetchedRecordings;
-(void)setDefaultDelegate:(id<NSFetchedResultsControllerDelegate>)arg1 ;
-(id<NSFetchedResultsControllerDelegate>)defaultDelegate;
-(void)setDelegate:(id)arg1 ;
-(id<RCFolder>)folder;
-(void)setFolder:(id<RCFolder>)arg1 ;
-(void)invalidate;
-(void)setSearchString:(NSString *)arg1 ;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(BOOL)performFetch:(id*)arg1 ;
-(NSPredicate *)fetchPredicate;
@end

