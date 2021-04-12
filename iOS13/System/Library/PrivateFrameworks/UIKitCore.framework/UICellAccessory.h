/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSString;

@interface UICellAccessory : NSObject {

	UIView* _view;
	BOOL _alwaysNeedsLayout;
	NSString* _identifier;

}

@property (nonatomic,readonly) BOOL alwaysNeedsLayout;                       //@synthesize alwaysNeedsLayout=_alwaysNeedsLayout - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UIView * view;                                //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) BOOL requestsHuggingLayoutWidth; 
+(id)accessoryWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIView *)view;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)requestsHuggingLayoutWidth;
-(BOOL)alwaysNeedsLayout;
@end

