/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AKMinimalUserInterfaceItem.h>
#import <libobjc.A.dylib/AKColorChooserUserInterfaceItem.h>

@class UIColor, NSString;

@interface AKMinimalColorChooserUserInterfaceItem : AKMinimalUserInterfaceItem <AKColorChooserUserInterfaceItem> {

	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end

