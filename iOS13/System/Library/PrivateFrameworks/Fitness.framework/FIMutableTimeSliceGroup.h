/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


@class NSArray;

@interface FIMutableTimeSliceGroup : NSObject {

	NSArray* _slices;

}

@property (nonatomic,readonly) NSArray * slices;                     //@synthesize slices=_slices - In the implementation block
@property (nonatomic,readonly) BOOL allSlicesFinalized; 
+(id)timeSliceGroupForQuantityTypes:(id)arg1 startDate:(id)arg2 ;
-(NSArray *)slices;
-(id)initWithTimeSlices:(id)arg1 ;
-(void)commitAllSlicesToDate:(id)arg1 ;
-(void)updateSlicesWithEndDate:(id)arg1 ;
-(void)updateSlicesWithSample:(id)arg1 ;
-(BOOL)allSlicesFinalized;
@end

