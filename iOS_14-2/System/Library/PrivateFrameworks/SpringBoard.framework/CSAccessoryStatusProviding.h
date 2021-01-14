/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class CSAccessory;


@protocol CSAccessoryStatusProviding <NSObject>
@property (nonatomic,readonly) CSAccessory * lastAttachedAccessory; 
@property (nonatomic,readonly) CSAccessory * lastDetachedAccessory; 
@property (nonatomic,readonly) BOOL isAccessoryAnimationAllowed; 
@required
-(CSAccessory *)lastDetachedAccessory;
-(CSAccessory *)lastAttachedAccessory;
-(BOOL)isAccessoryAnimationAllowed;

@end

