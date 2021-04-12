/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKPinnedConversationActivityItem.h>

@class NSString, IMMessage, IMChat;

@interface CKPinnedConversationSummaryBubbleActivityItem : NSObject <CKPinnedConversationActivityItem> {

	double _activityItemContentScale;
	NSString* _attachedContactItemIdentifier;
	IMMessage* _message;
	IMChat* _chat;

}

@property (nonatomic,readonly) IMMessage * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) IMChat * chat;                                         //@synthesize chat=_chat - In the implementation block
@property (nonatomic,readonly) NSString * attachedContactItemIdentifier;              //@synthesize attachedContactItemIdentifier=_attachedContactItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * activityItemIdentifier; 
@property (nonatomic,readonly) BOOL activityItemAppearsWithAnimation; 
@property (nonatomic,readonly) BOOL activityItemDisappearsWithAnimation; 
@property (nonatomic,readonly) double activityItemContentScale;                       //@synthesize activityItemContentScale=_activityItemContentScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IMChat *)chat;
-(IMMessage *)message;
-(id)initWithMessage:(id)arg1 chat:(id)arg2 contentScale:(double)arg3 attachedContactItemIdentifier:(id)arg4 ;
-(id)activityItemView;
-(NSString *)activityItemIdentifier;
-(BOOL)activityItemAppearsWithAnimation;
-(BOOL)activityItemDisappearsWithAnimation;
-(double)activityItemContentScale;
-(NSString *)attachedContactItemIdentifier;
@end

