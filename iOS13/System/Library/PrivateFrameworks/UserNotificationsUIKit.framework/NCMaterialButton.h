/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>

@class NSArray, MTVisualStylingProvider, NSMutableDictionary, NSString;

@interface NCMaterialButton : UIButton <MTVisualStylingRequiring> {

	MTVisualStylingProvider* _visualStylingProvider;
	NSMutableDictionary* _styling;
	NSMutableDictionary* _imageViewStyling;

}

@property (nonatomic,retain) NSMutableDictionary * styling;                               //@synthesize styling=_styling - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageViewStyling;                      //@synthesize imageViewStyling=_imageViewStyling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(NSMutableDictionary *)styling;
-(void)setStyling:(NSMutableDictionary *)arg1 ;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(void)_applyStyling;
-(NSArray *)requiredVisualStyleCategories;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(void)_applyButtonStyling;
-(void)_setFlagsRelatedToState:(unsigned long long)arg1 to:(BOOL)arg2 ;
-(void)_applyImageViewStyling;
-(void)setStyle:(long long)arg1 forState:(unsigned long long)arg2 ;
-(void)setImageViewStyle:(long long)arg1 forState:(unsigned long long)arg2 ;
-(NSMutableDictionary *)imageViewStyling;
-(void)setImageViewStyling:(NSMutableDictionary *)arg1 ;
@end

