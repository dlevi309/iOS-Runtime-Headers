/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITextItemDiscoverable <NSObject>
@property (nonatomic,readonly) id<UICoordinateSpace> textItemCoordinateSpace; 
@optional
-(BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2;

@required
-(id<UICoordinateSpace>)textItemCoordinateSpace;
-(id)visibleTextRange;
-(id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2;

@end

