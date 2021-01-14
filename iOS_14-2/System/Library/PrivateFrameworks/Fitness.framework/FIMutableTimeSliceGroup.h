/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

