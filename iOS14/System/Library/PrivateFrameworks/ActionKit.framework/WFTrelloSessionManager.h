/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSDateFormatter, NSString, NSURL, NSURLSession;

@interface WFTrelloSessionManager : NSObject {

	NSDateFormatter* _dateFormatter;
	NSString* _token;
	NSURL* _baseURL;
	NSURLSession* _session;

}

@property (nonatomic,readonly) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                              //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * token;                                 //@synthesize token=_token - In the implementation block
-(NSURL *)baseURL;
-(id)init;
-(NSDateFormatter *)dateFormatter;
-(NSURLSession *)session;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(id)initWithConfiguration:(id)arg1 token:(id)arg2 ;
-(void)getOpenBoardsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getListsForBoard:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getCardsForList:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createBoardWithName:(id)arg1 boardDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createListWithName:(id)arg1 onBoardWithIdentifier:(id)arg2 position:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)createCardWithName:(id)arg1 listIdentifier:(id)arg2 dueDate:(id)arg3 cardPosition:(id)arg4 cardDescription:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)uploadFile:(id)arg1 onCard:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getAttachmentsOnCard:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)lookupCardWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestPath:(id)arg1 parameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

