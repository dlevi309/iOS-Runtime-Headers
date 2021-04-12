/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <libobjc.A.dylib/AKUserInterfaceItem.h>
#import <libobjc.A.dylib/AKTextAttributesUserInterfaceItem.h>

@class AKTextAttributesViewController, NSString;

@interface AKTextAttributesUIItemDelegate : NSObject <AKUserInterfaceItem, AKTextAttributesUserInterfaceItem> {

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
-(id)convertTextAttributes:(id)arg1 ;
-(void)syncTextAttributesToUI:(id)arg1 ;
@end

