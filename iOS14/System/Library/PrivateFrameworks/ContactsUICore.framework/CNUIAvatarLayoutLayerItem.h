/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNCancelable;
@class CALayer;

@interface CNUIAvatarLayoutLayerItem : NSObject {

	CALayer* _layer;
	id<CNCancelable> _avatarImageRendererToken;

}

@property (nonatomic,retain) CALayer * layer;                                        //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) id<CNCancelable> avatarImageRendererToken;              //@synthesize avatarImageRendererToken=_avatarImageRendererToken - In the implementation block
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 ;
-(void)resetToken;
-(id<CNCancelable>)avatarImageRendererToken;
-(void)setAvatarImageRendererToken:(id<CNCancelable>)arg1 ;
-(void)setLayer:(CALayer *)arg1 ;
@end

