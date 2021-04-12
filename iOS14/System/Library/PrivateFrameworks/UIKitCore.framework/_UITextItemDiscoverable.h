/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITextItemDiscoverable <NSObject>
@property (nonatomic,readonly) id<UICoordinateSpace> textItemCoordinateSpace; 
@optional
-(BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2;

@required
-(id)visibleTextRange;
-(id<UICoordinateSpace>)textItemCoordinateSpace;
-(id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2;

@end

