/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIFocusEnvironment;
@class NSString;

@interface _UIFocusGroup : NSObject {

	_UIFocusGroup* _parentGroup;
	id<UIFocusEnvironment> _rootEnvironment;
	NSString* _identifier;

}

@property (getter=_identifier,nonatomic,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) _UIFocusGroup * parentGroup; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> rootEnvironment;              //@synthesize rootEnvironment=_rootEnvironment - In the implementation block
+(id)nullGroup;
+(id)invalidGroup;
-(id)initWithIdentifier:(id)arg1 rootEnvironment:(id)arg2 ;
-(id)childGroupWithIdentifier:(id)arg1 ;
-(id)childGroupWithIdentifier:(id)arg1 rootEnvironment:(id)arg2 ;
-(id<UIFocusEnvironment>)rootEnvironment;
-(id)description;
-(id)_identifier;
-(id)_commonAncestorWithGroup:(id)arg1 ;
-(unsigned long long)hash;
-(_UIFocusGroup *)parentGroup;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqualToFocusGroup:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

