/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UIView, NSString;

@interface CKDetailsMapViewCell : CKDetailsCell <CKDetailsCell> {

	UIView* _mapView;

}

@property (nonatomic,retain) UIView * mapView;                      //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(void)setMapView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)mapView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

