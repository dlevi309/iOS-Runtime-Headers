/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <Messages/Messages-Structs.h>
#import <libobjc.A.dylib/_MSStickerSendManagerDelegate.h>

@protocol _MSStickerSendManagerDelegate;
@class NSString;

@interface _MSStickerSendManager : NSObject <_MSStickerSendManagerDelegate> {

	id<_MSStickerSendManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_MSStickerSendManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id<_MSStickerSendManagerDelegate>)delegate;
-(void)setDelegate:(id<_MSStickerSendManagerDelegate>)arg1 ;
-(void)stickerDragCanceled;
-(void)insertSticker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDragSticker:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)stickerDragMoved:(id)arg1 frameInRemoteView:(CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 fence:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
@end

