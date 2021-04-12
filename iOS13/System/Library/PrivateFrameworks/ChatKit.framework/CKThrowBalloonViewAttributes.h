/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@class CKBalloonView, NSDictionary;

@interface CKThrowBalloonViewAttributes : NSObject {

	CKBalloonView* _throwBalloonView;
	NSDictionary* _supplementaryViews;
	CGRect _startFrame;

}

@property (nonatomic,retain) CKBalloonView * throwBalloonView;               //@synthesize throwBalloonView=_throwBalloonView - In the implementation block
@property (nonatomic,retain) NSDictionary * supplementaryViews;              //@synthesize supplementaryViews=_supplementaryViews - In the implementation block
@property (assign,nonatomic) CGRect startFrame;                              //@synthesize startFrame=_startFrame - In the implementation block
-(void)setStartFrame:(CGRect)arg1 ;
-(CGRect)startFrame;
-(void)setSupplementaryViews:(NSDictionary *)arg1 ;
-(void)setThrowBalloonView:(CKBalloonView *)arg1 ;
-(CKBalloonView *)throwBalloonView;
-(NSDictionary *)supplementaryViews;
@end

