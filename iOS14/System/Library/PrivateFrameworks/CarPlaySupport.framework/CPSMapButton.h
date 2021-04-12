/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSButton.h>

@class CPMapButton;

@interface CPSMapButton : CPSButton {

	CPMapButton* _mapButton;

}

@property (nonatomic,retain) CPMapButton * mapButton;              //@synthesize mapButton=_mapButton - In the implementation block
+(id)buttonWithCPMapButton:(id)arg1 ;
-(float)charge;
-(void)setCharge:(float)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setMapButton:(CPMapButton *)arg1 ;
-(void)_updateButtonImages;
-(CPMapButton *)mapButton;
@end

