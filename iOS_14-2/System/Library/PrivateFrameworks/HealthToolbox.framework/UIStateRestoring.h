/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@protocol UIStateRestoring <NSObject>
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
@optional
-(void)decodeRestorableStateWithCoder:(id)arg1;
-(void)encodeRestorableStateWithCoder:(id)arg1;
-(id<UIStateRestoring>)restorationParent;
-(Class)objectRestorationClass;
-(void)applicationFinishedRestoringState;

@end

