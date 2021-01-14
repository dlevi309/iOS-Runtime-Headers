/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

