/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NSArray;


@protocol AVVideoCompositionInstruction <NSObject>
@property (nonatomic,readonly) SCD_Struct_NU16 timeRange; 
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@required
-(BOOL)enablePostProcessing;
-(NSArray *)requiredSourceTrackIDs;
-(BOOL)containsTweening;
-(int)passthroughTrackID;
-(SCD_Struct_NU16)timeRange;

@end

