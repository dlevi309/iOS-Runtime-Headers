/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol NSItemProviderWriting;
@class UIView;

@interface _MKPlaceCardDraggableContent : NSObject {

	BOOL _header;
	int _analyticsTarget;
	UIView* _view;
	id<NSItemProviderWriting> _draggableContent;

}

@property (nonatomic,retain) UIView * view;                                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<NSItemProviderWriting> draggableContent;              //@synthesize draggableContent=_draggableContent - In the implementation block
@property (assign,getter=isHeader,nonatomic) BOOL header;                             //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) int analyticsTarget;                                     //@synthesize analyticsTarget=_analyticsTarget - In the implementation block
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(BOOL)isHeader;
-(void)setHeader:(BOOL)arg1 ;
-(void)setDraggableContent:(id<NSItemProviderWriting>)arg1 ;
-(void)setAnalyticsTarget:(int)arg1 ;
-(id<NSItemProviderWriting>)draggableContent;
-(int)analyticsTarget;
@end

