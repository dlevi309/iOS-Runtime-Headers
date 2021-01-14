/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKPinnedConversationActivityItem.h>

@class NSString, IMMessage;

@interface CKPinnedConversationRichLinkActivityItem : NSObject <CKPinnedConversationActivityItem> {

	double _activityItemContentScale;
	NSString* _attachedContactItemIdentifier;
	IMMessage* _message;

}

@property (nonatomic,readonly) IMMessage * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * attachedContactItemIdentifier;              //@synthesize attachedContactItemIdentifier=_attachedContactItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * activityItemIdentifier; 
@property (nonatomic,readonly) BOOL activityItemAppearsWithAnimation; 
@property (nonatomic,readonly) BOOL activityItemDisappearsWithAnimation; 
@property (nonatomic,readonly) double activityItemContentScale;                       //@synthesize activityItemContentScale=_activityItemContentScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IMMessage *)message;
-(id)activityItemView;
-(NSString *)activityItemIdentifier;
-(BOOL)activityItemAppearsWithAnimation;
-(BOOL)activityItemDisappearsWithAnimation;
-(double)activityItemContentScale;
-(NSString *)attachedContactItemIdentifier;
-(id)initWithMessage:(id)arg1 contentScale:(double)arg2 attachedContactItemIdentifier:(id)arg3 ;
@end

