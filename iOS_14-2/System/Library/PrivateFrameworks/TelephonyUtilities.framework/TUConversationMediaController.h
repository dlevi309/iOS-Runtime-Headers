/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<TUConversationManagerDataSource>)dataSource;
-(void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2 ;
-(void)setDelegate:(id<TUConversationMediaControllerDelegate>)arg1 ;
-(void)mediaPrioritiesChangeForConversation:(id)arg1 ;
-(id)initWithConversationDataSource:(id)arg1 ;
@end

