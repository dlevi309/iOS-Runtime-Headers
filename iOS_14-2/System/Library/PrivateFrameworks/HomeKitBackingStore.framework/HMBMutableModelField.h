/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBModelField.h>

@class HMFVersion;

@interface HMBMutableModelField : HMBModelField

@property (assign,getter=isOptional,nonatomic) BOOL optional; 
@property (assign,nonatomic) unsigned long long loggingVisibility; 
@property (nonatomic,retain) id defaultValue; 
@property (nonatomic,copy) HMFVersion * readonlyVersion; 
@property (nonatomic,copy) HMFVersion * unavailableVersion; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

