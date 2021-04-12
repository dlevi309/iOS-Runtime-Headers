/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIView.h>

@class UIImageView, _MKUILabel, UIView, MKMapItem;

@interface MKPhotoBigAttributionView : UIView {

	UIImageView* _imageView;
	_MKUILabel* _firstLineLabel;
	_MKUILabel* _secondLineLabel;
	UIView* _labelsView;
	UIView* _backgroundView;
	long long _context;
	long long _type;
	MKMapItem* _mapItem;

}

@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithContext:(long long)arg1 ;
-(void)updateBackground;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)firstLineLabelFont;
-(id)secondLineLabelFont;
-(void)updateInfoAttributionString;
-(void)setMapItem:(id)arg1 andType:(long long)arg2 ;
@end

