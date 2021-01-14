/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKPinnedConversationActivityItem.h>

@class NSString, IMMessage, CKMediaObject;

@interface CKPinnedConversationMediaObjectActivityItem : NSObject <CKPinnedConversationActivityItem> {

	double _activityItemContentScale;
	NSString* _attachedContactItemIdentifier;
	IMMessage* _message;
	CKMediaObject* _mediaObject;

}

@property (nonatomic,readonly) IMMessage * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) CKMediaObject * mediaObject;                           //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,readonly) NSString * attachedContactItemIdentifier;              //@synthesize attachedContactItemIdentifier=_attachedContactItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * activityItemIdentifier; 
@property (nonatomic,readonly) BOOL activityItemAppearsWithAnimation; 
@property (nonatomic,readonly) BOOL activityItemDisappearsWithAnimation; 
@property (nonatomic,readonly) double activityItemContentScale;                       //@synthesize activityItemContentScale=_activityItemContentScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)previewImageForMediaObject:(id)arg1 ;
+(BOOL)_mediaTypeSupportedForPinningPreview:(int)arg1 ;
+(id)previewableMediaObjectFromMessage:(id)arg1 ;
-(IMMessage *)message;
-(id)initWithMessage:(id)arg1 mediaObject:(id)arg2 contentScale:(double)arg3 attachedContactItemIdentifier:(id)arg4 ;
-(id)activityItemView;
-(NSString *)activityItemIdentifier;
-(BOOL)activityItemAppearsWithAnimation;
-(BOOL)activityItemDisappearsWithAnimation;
-(double)activityItemContentScale;
-(NSString *)attachedContactItemIdentifier;
-(CKMediaObject *)mediaObject;
@end

