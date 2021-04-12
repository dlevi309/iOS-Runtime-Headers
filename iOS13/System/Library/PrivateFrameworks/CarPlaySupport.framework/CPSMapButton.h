/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSButton.h>

@class CPMapButton;

@interface CPSMapButton : CPSButton {

	CPMapButton* _mapButton;

}

@property (nonatomic,retain) CPMapButton * mapButton;              //@synthesize mapButton=_mapButton - In the implementation block
+(id)buttonWithCPMapButton:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCharge:(float)arg1 ;
-(float)charge;
-(void)setMapButton:(CPMapButton *)arg1 ;
-(void)_updateButtonImages;
-(CPMapButton *)mapButton;
@end

