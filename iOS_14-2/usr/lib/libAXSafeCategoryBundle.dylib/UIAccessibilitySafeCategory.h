/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAXSafeCategoryBundle.dylib
*/


#import <libAXSafeCategoryBundle.dylib/libAXSafeCategoryBundle.dylib-Structs.h>
@class NSString;

@interface UIAccessibilitySafeCategory : NSObject

@property (nonatomic,copy) NSString * accessibilityIdentifier; 
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
+(id)_installSafeCategoryOnClassNamed:(id)arg1 isManaged:(BOOL)arg2 ;
+(id)_installLocalValidationMethodOnClassNamed:(id)arg1 ;
+(void)_addCategoryMethods:(objc_method*)arg1 count:(unsigned)arg2 excluding:(SEL*)arg3 count:(unsigned)arg4 toClass:(Class)arg5 isClass:(BOOL)arg6 ;
+(id)_installSafeCategoryOnClass:(Class)arg1 isManaged:(BOOL)arg2 ;
+(Class)safeCategoryTargetClass;
+(void)safeCategoryAddDependenciesToCollection:(id)arg1 ;
+(void)_installSafeCategoryOnClassNamed:(id)arg1 ;
@end

