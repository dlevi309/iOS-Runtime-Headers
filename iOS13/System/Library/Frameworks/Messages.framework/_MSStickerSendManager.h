/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)insertSticker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDragSticker:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

