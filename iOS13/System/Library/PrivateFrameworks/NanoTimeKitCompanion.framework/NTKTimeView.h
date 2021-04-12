/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKTimeView <NSObject>
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
@required
-(BOOL)isFrozen;
-(void)setTimeOffset:(double)arg1;
-(void)setFrozen:(BOOL)arg1;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2;

@end

