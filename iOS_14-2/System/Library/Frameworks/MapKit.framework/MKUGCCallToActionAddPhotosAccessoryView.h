/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, NSString;

@interface MKUGCCallToActionAddPhotosAccessoryView : UIView {

	UIButton* _addPhotosButton;
	NSString* _glyphName;

}

@property (nonatomic,copy) NSString * glyphName;              //@synthesize glyphName=_glyphName - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)glyphName;
-(void)_setupButtons;
-(void)setGlyphName:(NSString *)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_contentSizeChanged;
@end

