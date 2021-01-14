/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSActionButton.h>
#import <libobjc.A.dylib/CPSActionButtonLayoutDelegate.h>

@class NSString;

@interface CPSEntityMapButton : CPSActionButton <CPSActionButtonLayoutDelegate> {

	unsigned long long _entityMapButtonType;

}

@property (assign,nonatomic) unsigned long long entityMapButtonType;              //@synthesize entityMapButtonType=_entityMapButtonType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithEntityMapButtonType:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)buttonSize;
-(void)layoutSubviews;
-(id)buttonBackgroundColor;
-(void)setNeedsLayout;
-(id)buttonAttributes;
-(CGSize)buttonGlyphSize;
-(id)buttonImageTintColor;
-(void)setEntityMapButtonType:(unsigned long long)arg1 ;
-(unsigned long long)entityMapButtonType;
@end

