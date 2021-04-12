/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class EKEventMapDetailItem;

@interface EKEventMapCell : UITableViewCell {

	BOOL _currentlyLoading;
	BOOL _mapViewSetup;
	EKEventMapDetailItem* _detailItem;

}

@property (assign,nonatomic,__weak) EKEventMapDetailItem * detailItem;              //@synthesize detailItem=_detailItem - In the implementation block
@property (assign,nonatomic) BOOL currentlyLoading;                                 //@synthesize currentlyLoading=_currentlyLoading - In the implementation block
@property (assign,nonatomic) BOOL mapViewSetup;                                     //@synthesize mapViewSetup=_mapViewSetup - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)_drawContentInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
-(void)_drawSeparatorInRect:(CGRect)arg1 ;
-(EKEventMapDetailItem *)detailItem;
-(void)setDetailItem:(EKEventMapDetailItem *)arg1 ;
-(BOOL)currentlyLoading;
-(void)setCurrentlyLoading:(BOOL)arg1 ;
-(BOOL)mapViewSetup;
-(void)setMapViewSetup:(BOOL)arg1 ;
@end

