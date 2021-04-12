/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)detailsCellDefaultHeight;
+(id)_bodyFontAtDefaultSize;
+(double)_scaledDistanceCalculatedFromTopFromBaseline:(double)arg1 ;
+(double)_scaledDistanceCalculatedFromBottomToBaseline:(double)arg1 ;
+(double)detailsPostLabelSpace;
+(double)detailsTopVerticalInset;
+(double)detailsBottomVerticalInset;
-(BOOL)isEditable;
-(void)layoutMarginsDidChange;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 ;
-(BOOL)update;
-(void)setEvent:(id)arg1 ;
-(BOOL)needsLayoutForWidth:(double)arg1 position:(int)arg2 ;
-(double)detailsRightInset;
-(void)sizeToFit;
-(double)detailsLeftInset;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
@end

