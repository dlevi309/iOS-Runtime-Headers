/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIViewVisitor.h>

@class UIView;

@interface _UITintColorVisitor : _UIViewVisitor {

	unsigned long long _reasons;
	UIView* _originalVisitedView;
	UIView* _changedSubview;

}
-(id)initWithNotificationReasons:(unsigned long long)arg1 ;
-(BOOL)_visitView:(id)arg1 ;
-(BOOL)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5 ;
-(id)initWithTraversalDirection:(unsigned long long)arg1 ;
@end

