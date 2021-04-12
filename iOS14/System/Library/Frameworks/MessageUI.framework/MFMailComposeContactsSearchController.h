/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/CNAutocompleteSearchConsumer.h>

@protocol MFMailComposeContactsSearchControllerDelegate;
@class CNAutocompleteSearchManager, NSMutableArray, NSNumber, NSString;

@interface MFMailComposeContactsSearchController : NSObject <CNAutocompleteSearchConsumer> {

	CNAutocompleteSearchManager* _manager;
	NSMutableArray* _autocompleteSearchResults;
	NSMutableArray* _corecipientSearchResults;
	NSNumber* _corecipientSearchTaskID;
	BOOL _foundAnySearchResults;
	unsigned long long _waitingOnSearchResultsCount;
	id<MFMailComposeContactsSearchControllerDelegate> _delegate;
	NSNumber* _taskID;

}

@property (nonatomic,retain) NSNumber * taskID;                                                              //@synthesize taskID=_taskID - In the implementation block
@property (assign,nonatomic,__weak) id<MFMailComposeContactsSearchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelSearch;
-(void)removeRecipient:(id)arg1 ;
-(id)init;
-(id<MFMailComposeContactsSearchControllerDelegate>)delegate;
-(void)searchWithString:(id)arg1 ;
-(void)finishedSearchingForCorecipients;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(NSNumber *)taskID;
-(void)setDelegate:(id<MFMailComposeContactsSearchControllerDelegate>)arg1 ;
-(void)setTaskID:(NSNumber *)arg1 ;
-(void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)searchWithString:(id)arg1 enteredRecipients:(id)arg2 title:(id)arg3 ;
-(void)_cancelSearchAndNotify:(BOOL)arg1 ;
-(void)_finishSearch;
-(void)findCorecipientsWithRecipients:(id)arg1 ;
-(void)_reset;
@end

