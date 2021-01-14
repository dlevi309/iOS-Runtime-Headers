/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKeyboardKeyplaneTransformation.h>

@class NSString;

@interface UIKBPhoneToCarPlayTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cachedKeys;
+(id)transformationIdentifier;
+(id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(void)removeAddedKeysFromKeyplane:(id)arg1 ;
+(id)fillFrame:(CGRect)arg1 withEmptyKeyNamed:(id)arg2 inKeyplane:(id)arg3 withTransformationContext:(id)arg4 ;
+(unsigned long long)columnBySwappingForLeftHandDriveIfNeeded:(unsigned long long)arg1 ;
+(id)transform10KeyKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(id)transformQWERTYKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(id)cachedKeysForTransformationContext:(id)arg1 ;
@end

