/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSString;

@interface _UICellAccessory : NSObject {

	UIView* _view;
	BOOL _alwaysNeedsLayout;
	NSString* _identifier;
	double _reservedLayoutWidth;

}

@property (nonatomic,readonly) BOOL alwaysNeedsLayout;                //@synthesize alwaysNeedsLayout=_alwaysNeedsLayout - In the implementation block
@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UIView * view;                         //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) double reservedLayoutWidth;              //@synthesize reservedLayoutWidth=_reservedLayoutWidth - In the implementation block
+(id)accessoryWithIdentifier:(id)arg1 ;
-(id)init;
-(void)setReservedLayoutWidth:(double)arg1 ;
-(BOOL)alwaysNeedsLayout;
-(double)reservedLayoutWidth;
-(id)description;
-(UIView *)view;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

