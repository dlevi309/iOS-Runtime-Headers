/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITransform.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableArray, NSArray, NSString;

@interface UITransformer : UITransform <BSDescriptionProviding, NSMutableCopying> {

	NSMutableArray* _transforms;
	NSMutableArray* _transformReasonAssociations;

}

@property (nonatomic,copy,readonly) NSArray * transforms;              //@synthesize transforms=_transforms - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)transforms;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithTransformer:(id)arg1 ;
@end

