/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <IMCore/IMBalloonPluginDataSource.h>

@class CKMediaObject, CKBalloonView;

@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource {

	CKMediaObject* _mediaObject;
	CKBalloonView* _balloonView;

}

@property (nonatomic,retain) CKBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) CKMediaObject * mediaObject;              //@synthesize mediaObject=_mediaObject - In the implementation block
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(id)initWithPluginPayload:(id)arg1 ;
-(CKBalloonView *)balloonView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(id)imageBalloon;
-(void)previewDidChange:(id)arg1 ;
-(CKMediaObject *)mediaObject;
-(void)dealloc;
@end

