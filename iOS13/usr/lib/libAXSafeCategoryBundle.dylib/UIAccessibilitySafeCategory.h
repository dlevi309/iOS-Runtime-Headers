/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAXSafeCategoryBundle.dylib
*/


#import <libAXSafeCategoryBundle.dylib/libAXSafeCategoryBundle.dylib-Structs.h>
@class NSString;

@interface UIAccessibilitySafeCategory : NSObject

@property (nonatomic,copy) NSString * accessibilityIdentifier; 
+(id)safeCategoryTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
+(id)_installSafeCategoryOnClassNamed:(id)arg1 isManaged:(BOOL)arg2 ;
+(id)_installLocalValidationMethodOnClassNamed:(id)arg1 ;
+(void)_addCategoryMethods:(objc_method*)arg1 count:(unsigned)arg2 excluding:(SEL*)arg3 count:(unsigned)arg4 toClass:(Class)arg5 isClass:(BOOL)arg6 ;
+(id)_installSafeCategoryOnClass:(Class)arg1 isManaged:(BOOL)arg2 ;
+(Class)safeCategoryBaseClass;
+(Class)safeCategoryTargetClass;
+(void)safeCategoryAddDependenciesToCollection:(id)arg1 ;
+(void)_installSafeCategoryOnClassNamed:(id)arg1 ;
@end

