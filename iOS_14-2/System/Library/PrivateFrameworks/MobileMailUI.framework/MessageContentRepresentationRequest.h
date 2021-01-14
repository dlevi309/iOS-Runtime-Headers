/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFCancelable.h>
#import <libobjc.A.dylib/EFSignpostable.h>

@protocol EMContentItemRequestDelegate, EFObserver, EMCollectionItemID;
@class EFCancelationToken, EFObservable, EFFuture, EMMessage, NSString;

@interface MessageContentRepresentationRequest : NSObject <EFLoggable, EFCancelable, EFSignpostable> {

	id<EMContentItemRequestDelegate> _delegate;
	EFCancelationToken* _cancelationToken;
	EFObservable*<EFObserver> _inputObservable;
	EFObservable* _contentObservable;
	EFFuture* _futureContentRepresentation;
	AB _hasError;
	unsigned long long _retyAttempt;
	BOOL _includeSuggestionItems;
	os_unfair_lock_s _contentRepresentationLock;
	id<EMCollectionItemID> _itemID;
	EFFuture* _messageFuture;

}

@property (nonatomic,readonly) EMMessage * message; 
@property (nonatomic,readonly) id<EMCollectionItemID> itemID;              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) EFFuture * messageFuture;                   //@synthesize messageFuture=_messageFuture - In the implementation block
@property (readonly) BOOL hasStarted; 
@property (readonly) BOOL isFinished; 
@property (readonly) unsigned long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
+(id)log;
+(id)defaultScheduler;
+(id)signpostLog;
-(EMMessage *)message;
-(unsigned long long)signpostID;
-(void)retry;
-(id)onScheduler:(id)arg1 addLoadObserver:(/*^block*/id)arg2 ;
-(void)start;
-(id)addLoadObserver:(/*^block*/id)arg1 ;
-(BOOL)isFinished;
-(BOOL)hasStarted;
-(id<EMCollectionItemID>)itemID;
-(id)resultIfAvailable;
-(unsigned long long)state;
-(id)waitForResult;
-(void)cancel;
-(void)dealloc;
-(id)initWithMessage:(id)arg1 includeSuggestionItems:(BOOL)arg2 delegate:(id)arg3 ;
-(void)_commonInitWithIncludeSuggestionItems:(BOOL)arg1 delegate:(id)arg2 ;
-(id)initWithMessageList:(id)arg1 itemIdentifier:(id)arg2 includeSuggestionItems:(BOOL)arg3 delegate:(id)arg4 ;
-(EFFuture *)messageFuture;
-(void)_resetFuture:(id)arg1 ;
-(void)_issueMessageContentRepresentationRequest;
-(id)_contentRepresentationFuture;
-(id)initWithMessage:(id)arg1 includeSuggestionItems:(BOOL)arg2 ;
-(id)initWithMessageList:(id)arg1 itemIdentifier:(id)arg2 includeSuggestionItems:(BOOL)arg3 ;
-(void)updateItemID:(id)arg1 messageList:(id)arg2 ;
@end

