/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSActionButton.h>

@class CPButton;

@interface CPSEntityButton : CPSActionButton {

	CPButton* _entityButton;

}

@property (nonatomic,readonly) CPButton * entityButton;              //@synthesize entityButton=_entityButton - In the implementation block
+(id)buttonWithEntityButton:(id)arg1 ;
-(void)setEntityButton:(CPButton *)arg1 ;
-(CPButton *)entityButton;
-(id)CPSButtonTitleForButton:(id)arg1 ;
-(id)CPSButtonImageForButton:(id)arg1 ;
@end

