/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsCalendarDirectorySearchResponseConsumer.h>
#import <DADaemonSupport/DASearchQueryConsumer.h>

@class NSSet, NSString;

@interface DADClientCalendarDirectorySearchResponseDelegate : DADClientDelegate <DAEventsCalendarDirectorySearchResponseConsumer, DASearchQueryConsumer> {

	NSSet* _terms;
	NSSet* _recordTypes;
	unsigned long long _resultLimit;
	id _searchID;
	BOOL _exceededResultLimit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(void)calendarDirectorySearchFinishedWithError:(id)arg1 exceededResultLimit:(BOOL)arg2 ;
-(void)performRequest;
-(id)_convertSearchQueryResults:(id)arg1 ;
-(void)calendarDirectorySearchReturnedResults:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 terms:(id)arg3 recordTypes:(id)arg4 resultLimit:(unsigned long long)arg5 ;
@end

