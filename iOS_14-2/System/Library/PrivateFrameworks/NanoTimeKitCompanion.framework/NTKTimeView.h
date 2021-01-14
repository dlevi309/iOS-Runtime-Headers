/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKTimeView <NSObject>
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
@required
-(void)setFrozen:(BOOL)arg1;
-(void)setTimeOffset:(double)arg1;
-(BOOL)isFrozen;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2;

@end

