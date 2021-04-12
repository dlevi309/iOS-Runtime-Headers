/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/MFContactsSearchConsumer.h>

@protocol AAUIContactsSearchDelegate;
@class MFContactsSearchManager, NSNumber, NSMutableArray, NSString;

@interface FAContactsSearchController : NSObject <MFContactsSearchConsumer> {

	MFContactsSearchManager* _searchManager;
	long long _countOfPendingResultBatches;
	BOOL _didFindResults;
	NSNumber* _searchTaskID;
	id<AAUIContactsSearchDelegate> _delegate;
	NSMutableArray* _resultsArray;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)cancelSearch;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)_cancelSearchAndNotify:(BOOL)arg1 ;
-(void)_endSearch;
-(void)beginSearchWithString:(id)arg1 ;
@end

