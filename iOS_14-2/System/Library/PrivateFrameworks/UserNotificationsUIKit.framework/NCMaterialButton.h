/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSArray *)requiredVisualStyleCategories;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSMutableDictionary *)styling;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setStyling:(NSMutableDictionary *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_applyStyling;
-(void)_applyButtonStyling;
-(void)_setFlagsRelatedToState:(unsigned long long)arg1 to:(BOOL)arg2 ;
-(void)_applyImageViewStyling;
-(void)setStyle:(long long)arg1 forState:(unsigned long long)arg2 ;
-(void)setImageViewStyle:(long long)arg1 forState:(unsigned long long)arg2 ;
-(NSMutableDictionary *)imageViewStyling;
-(void)setImageViewStyling:(NSMutableDictionary *)arg1 ;
@end

