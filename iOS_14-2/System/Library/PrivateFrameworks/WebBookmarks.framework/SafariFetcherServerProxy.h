/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)setDelegate:(id<WebBookmarksClientDelegateProtocol>)arg1 ;
-(void)clearReadingListArchiveWithUUID:(id)arg1 ;
-(void)clearAllReadingListArchives;
-(void)startReadingListFetcher;
-(void)didFinishFetching;
-(void)didUpdateProgressWithMessage:(id)arg1 ;
-(void)didStartFetchingReadingListItemWithMessage:(id)arg1 ;
-(void)didStopFetchingReadingListItemWithMessage:(id)arg1 ;
@end

