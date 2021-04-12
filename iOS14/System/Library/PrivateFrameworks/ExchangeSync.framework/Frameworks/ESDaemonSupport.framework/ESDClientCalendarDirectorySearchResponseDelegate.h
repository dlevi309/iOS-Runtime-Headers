/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/

#import <ESDaemonSupport/ESDClientDelegate.h>
#import <libobjc.A.dylib/DAEventsCalendarDirectorySearchResponseConsumer.h>
#import <libobjc.A.dylib/DASearchQueryConsumer.h>

@class NSSet, NSString;

@interface ESDClientCalendarDirectorySearchResponseDelegate : ESDClientDelegate <DAEventsCalendarDirectorySearchResponseConsumer, DASearchQueryConsumer> {

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
-(void)calendarDirectorySearchFinishedWithError:(id)arg1 exceededResultLimit:(BOOL)arg2 ;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)performRequest;
-(id)_convertSearchQueryResults:(id)arg1 ;
-(void)calendarDirectorySearchReturnedResults:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 terms:(id)arg3 recordTypes:(id)arg4 resultLimit:(unsigned long long)arg5 ;
@end

