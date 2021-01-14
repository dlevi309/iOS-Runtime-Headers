/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UISceneLayerTarget.h>

@class NSString;

@interface _UISceneLayerTargetWithContext : NSObject <UISceneLayerTarget> {

	id _context;
	unsigned long long _equalityType;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithContext:(id)arg1 equalityType:(unsigned long long)arg2 matchingBlock:(/*^block*/id)arg3 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)matchesLayer:(id)arg1 ;
@end

