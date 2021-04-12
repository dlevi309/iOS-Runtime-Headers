/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSCountedSet;

@interface _UIObjectReferenceCounter : NSObject {

	NSCountedSet* _objectReferences;

}
-(id)init;
-(void)incrementReferenceForObject:(id)arg1 ;
-(id)allObjects;
-(void)decrementReferenceForObject:(id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
@end

