/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@protocol WebBookmarksClientDelegateProtocol;
@class WebBookmarksXPCConnection, NSString;

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate> {

	WebBookmarksXPCConnection* _connection;
	id<WebBookmarksClientDelegateProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<WebBookmarksClientDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<WebBookmarksClientDelegateProtocol>)delegate;
-(void)setDelegate:(id<WebBookmarksClientDelegateProtocol>)arg1 ;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)startReadingListFetcher;
-(void)clearReadingListArchiveWithUUID:(id)arg1 ;
-(void)clearAllReadingListArchives;
-(void)didFinishFetching;
-(void)didUpdateProgressWithMessage:(id)arg1 ;
-(void)didStartFetchingReadingListItemWithMessage:(id)arg1 ;
-(void)didStopFetchingReadingListItemWithMessage:(id)arg1 ;
@end

