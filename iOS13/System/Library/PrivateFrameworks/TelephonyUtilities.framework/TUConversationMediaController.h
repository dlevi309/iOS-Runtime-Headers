/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUConversationMediaControllerDataSourceDelegate.h>

@protocol TUConversationMediaControllerDelegate, TUConversationManagerDataSource;
@class NSString;

@interface TUConversationMediaController : NSObject <TUConversationMediaControllerDataSourceDelegate> {

	id<TUConversationMediaControllerDelegate> _delegate;
	id<TUConversationManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) id<TUConversationManagerDataSource> dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<TUConversationMediaControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TUConversationMediaControllerDelegate>)delegate;
-(void)setDelegate:(id<TUConversationMediaControllerDelegate>)arg1 ;
-(id<TUConversationManagerDataSource>)dataSource;
-(void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2 ;
-(void)mediaPrioritiesChangeForConversation:(id)arg1 ;
-(id)initWithConversationDataSource:(id)arg1 ;
@end

