/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@protocol UIStateRestoring <NSObject>
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
@optional
-(void)encodeRestorableStateWithCoder:(id)arg1;
-(void)decodeRestorableStateWithCoder:(id)arg1;
-(void)applicationFinishedRestoringState;
-(id<UIStateRestoring>)restorationParent;
-(Class)objectRestorationClass;

@end

