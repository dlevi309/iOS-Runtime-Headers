/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_drawContentInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
-(void)_drawSeparatorInRect:(CGRect)arg1 ;
-(EKEventMapDetailItem *)detailItem;
-(void)setDetailItem:(EKEventMapDetailItem *)arg1 ;
-(BOOL)currentlyLoading;
-(void)setCurrentlyLoading:(BOOL)arg1 ;
-(BOOL)mapViewSetup;
-(void)setMapViewSetup:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

