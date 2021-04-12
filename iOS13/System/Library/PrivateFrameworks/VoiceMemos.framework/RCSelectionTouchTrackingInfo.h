/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@class UITouch;

@interface RCSelectionTouchTrackingInfo : NSObject {

	double _lastLocation;
	UITouch* _touch;
	double _trackingOffset;
	long long _selectionBarType;
	long long _selectionAffinity;

}

@property (assign,nonatomic,__weak) UITouch * touch;                   //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) double trackingOffset;                    //@synthesize trackingOffset=_trackingOffset - In the implementation block
@property (assign,nonatomic) long long selectionBarType;               //@synthesize selectionBarType=_selectionBarType - In the implementation block
@property (assign,nonatomic) long long selectionAffinity;              //@synthesize selectionAffinity=_selectionAffinity - In the implementation block
-(id)description;
-(UITouch *)touch;
-(long long)selectionAffinity;
-(void)setSelectionAffinity:(long long)arg1 ;
-(void)setTouch:(UITouch *)arg1 ;
-(void)setTrackingOffset:(double)arg1 ;
-(void)setSelectionBarType:(long long)arg1 ;
-(void)updateTrackingInfo;
-(long long)selectionBarType;
-(double)trackingOffset;
@end

