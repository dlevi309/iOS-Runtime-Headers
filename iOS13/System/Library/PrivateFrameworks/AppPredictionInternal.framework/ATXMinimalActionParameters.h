/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXMinimalSlotResolutionParameters, NSDate, NSString;

@interface ATXMinimalActionParameters : NSObject <NSCopying> {

	ATXMinimalSlotResolutionParameters* _minimalSlotResolutionParams;
	NSDate* _actionTime;
	NSString* _bundleId;
	NSString* _actionType;

}

@property (nonatomic,readonly) ATXMinimalSlotResolutionParameters * minimalSlotResolutionParams;              //@synthesize minimalSlotResolutionParams=_minimalSlotResolutionParams - In the implementation block
@property (nonatomic,retain) NSDate * actionTime;                                                             //@synthesize actionTime=_actionTime - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                                           //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * actionType;                                                         //@synthesize actionType=_actionType - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleId;
-(NSString *)actionType;
-(id)initWithMinimalSlotResolutionParameters:(id)arg1 actionTime:(id)arg2 bundleId:(id)arg3 actionType:(id)arg4 ;
-(id)getContainerWithScore:(float)arg1 ;
-(ATXMinimalSlotResolutionParameters *)minimalSlotResolutionParams;
-(NSDate *)actionTime;
-(void)setActionTime:(NSDate *)arg1 ;
@end

