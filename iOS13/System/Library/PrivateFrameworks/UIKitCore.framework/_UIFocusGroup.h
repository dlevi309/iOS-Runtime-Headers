/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIFocusGroupDescriptor;

@interface _UIFocusGroup : NSObject {

	_UIFocusGroupDescriptor* _descriptor;
	_UIFocusGroup* _parentGroup;

}

@property (getter=_descriptor,nonatomic,readonly) _UIFocusGroupDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) _UIFocusGroup * parentGroup; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)_descriptor;
-(BOOL)isEqualToFocusGroup:(id)arg1 ;
-(_UIFocusGroup *)parentGroup;
-(id)_commonAncestorWithGroup:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(id)childGroupWithDescriptor:(id)arg1 ;
@end

