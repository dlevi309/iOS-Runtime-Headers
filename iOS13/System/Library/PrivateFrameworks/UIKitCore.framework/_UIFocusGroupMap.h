/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMapTable, _UIFocusGroup;

@interface _UIFocusGroupMap : NSObject {

	NSMapTable* _environmentToGroupMap;
	NSMapTable* _descriptorToGroupMap;
	_UIFocusGroup* _nullGroup;

}
-(id)init;
-(id)focusGroupForEnvironment:(id)arg1 ;
-(id)_focusGroupForDescriptor:(id)arg1 withParent:(id)arg2 ;
@end

