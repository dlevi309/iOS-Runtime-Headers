/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class EKEvent;

@interface EKEventDetailCell : UITableViewCell {

	EKEvent* _event;
	BOOL _editable;
	double _lastLaidOutWidth;
	int _lastLaidOutPosition;

}

@property (nonatomic,readonly) BOOL isEditable; 
+(double)detailsPostLabelSpace;
+(double)detailsTopVerticalInset;
+(double)detailsBottomVerticalInset;
+(double)detailsCellDefaultHeight;
+(id)_bodyFontAtDefaultSize;
+(double)_scaledDistanceCalculatedFromTopFromBaseline:(double)arg1 ;
+(double)_scaledDistanceCalculatedFromBottomToBaseline:(double)arg1 ;
-(void)setEvent:(id)arg1 ;
-(BOOL)update;
-(void)sizeToFit;
-(void)layoutMarginsDidChange;
-(BOOL)isEditable;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3 ;
-(double)detailsLeftInset;
-(BOOL)needsLayoutForWidth:(double)arg1 position:(int)arg2 ;
-(double)detailsRightInset;
@end

