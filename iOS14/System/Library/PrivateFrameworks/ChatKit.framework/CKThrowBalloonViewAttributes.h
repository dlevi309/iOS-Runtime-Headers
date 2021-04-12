/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setThrowBalloonView:(CKBalloonView *)arg1 ;
-(void)setSupplementaryViews:(NSDictionary *)arg1 ;
-(CKBalloonView *)throwBalloonView;
-(NSDictionary *)supplementaryViews;
-(CGRect)startFrame;
@end

