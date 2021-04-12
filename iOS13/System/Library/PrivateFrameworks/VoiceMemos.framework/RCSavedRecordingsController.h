/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <CoreData/NSFetchedResultsController.h>

@protocol NSFetchedResultsControllerDelegate;
@class NSFetchRequest, NSPredicate, NSString, NSArray;

@interface RCSavedRecordingsController : NSFetchedResultsController {

	NSFetchRequest* _fetchRequest;
	NSPredicate* _fetchPredicate;
	NSString* _searchString;
	id<NSFetchedResultsControllerDelegate> _defaultDelegate;

}

@property (nonatomic,copy) NSString * searchString;                      //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) NSArray * fetchedRecordings; 
-(void)invalidate;
-(void)setDelegate:(id)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)setDefaultDelegate:(id)arg1 ;
-(NSArray *)fetchedRecordings;
@end

