/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <libobjc.A.dylib/AKUserInterfaceItem.h>
#import <libobjc.A.dylib/AKFontChooserUserInterfaceItem.h>

@class AKTextAttributesViewController, NSString;

@interface AKFontChooserUIItemDelegate : NSObject <AKUserInterfaceItem, AKFontChooserUserInterfaceItem> {

	AKTextAttributesViewController* _parentController;

}

@property (__weak) AKTextAttributesViewController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tag;
-(void)setParentController:(AKTextAttributesViewController *)arg1 ;
-(AKTextAttributesViewController *)parentController;
-(id)convertFont:(id)arg1 ;
-(void)syncFontsToUI:(id)arg1 ;
@end

