/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMapTable, _UIFocusGroup;

@interface _UIFocusGroupMap : NSObject {

	NSMapTable* _environmentToGroupMap;
	NSMapTable* _identifierToGroupMap;
	NSMapTable* _identifierToPrimaryItemMap;
	_UIFocusGroup* _nullGroup;

}
-(id)init;
-(id)_focusGroupForIdentifier:(id)arg1 withParent:(id)arg2 groupRootEnvironment:(id)arg3 ;
-(id)focusGroupForEnvironment:(id)arg1 ;
-(id)primaryFocusItemForGroup:(id)arg1 ;
@end

