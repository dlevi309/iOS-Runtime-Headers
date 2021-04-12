/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUConversationManagerDataSourceDelegate.h>

@protocol OS_dispatch_queue, TUConversationManagerDataSource;
@class TUConversationMediaController, NSObject, NSMapTable, NSSet, NSString;

@interface TUConversationManager : NSObject <TUConversationManagerDataSourceDelegate> {

	TUConversationMediaController* _mediaController;
	NSObject*<OS_dispatch_queue> _queue;
	id<TUConversationManagerDataSource> _dataSource;
	NSMapTable* _delegateToQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<TUConversationManagerDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateToQueue;                                 //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (nonatomic,readonly) TUConversationMediaController * mediaController;              //@synthesize mediaController=_mediaController - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activeConversations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)memorySize;
+(BOOL)supportsConversations;
+(BOOL)isAddPersonEnabled;
+(BOOL)allowsVideo;
+(BOOL)supportsEffects;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDataSource:(id)arg1 ;
-(id<TUConversationManagerDataSource>)dataSource;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSMapTable *)delegateToQueue;
-(NSSet *)activeConversations;
-(void)registerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addRemoteMembers:(id)arg1 toConversation:(id)arg2 ;
-(void)buzzMember:(id)arg1 conversation:(id)arg2 ;
-(void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(id)arg2 ;
-(void)conversationsChangedForDataSource:(id)arg1 oldConversationsByGroupUUID:(id)arg2 ;
-(void)serverDisconnectedForDataSource:(id)arg1 oldConversationsByGroupUUID:(id)arg2 ;
-(id)activeConversationWithGroupUUID:(id)arg1 ;
-(id)activeConversationWithRemoteMembers:(id)arg1 ;
-(TUConversationMediaController *)mediaController;
@end

