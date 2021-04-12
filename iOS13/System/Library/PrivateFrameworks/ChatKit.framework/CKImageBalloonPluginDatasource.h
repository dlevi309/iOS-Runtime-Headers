/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <IMCore/IMBalloonPluginDataSource.h>

@class CKBalloonView, CKMediaObject;

@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource {

	CKBalloonView* _balloonView;
	CKMediaObject* _mediaObject;

}

@property (nonatomic,retain) CKBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) CKMediaObject * mediaObject;              //@synthesize mediaObject=_mediaObject - In the implementation block
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithPluginPayload:(id)arg1 ;
-(CKBalloonView *)balloonView;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(CKMediaObject *)mediaObject;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(void)previewDidChange:(id)arg1 ;
-(id)imageBalloon;
@end

