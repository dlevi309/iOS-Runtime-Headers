/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeader:(BOOL)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(int)analyticsTarget;
-(BOOL)isHeader;
-(UIView *)view;
-(void)setDraggableContent:(id<NSItemProviderWriting>)arg1 ;
-(void)setAnalyticsTarget:(int)arg1 ;
-(id<NSItemProviderWriting>)draggableContent;
@end

