/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

