/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFragmentedAssetMinder.h>

@class NSArray;

@interface AVFragmentedMovieMinder : AVFragmentedAssetMinder

@property (assign,nonatomic) double mindingInterval; 
@property (nonatomic,readonly) NSArray * movies; 
+(id)fragmentedMovieMinderWithMovie:(id)arg1 mindingInterval:(double)arg2 ;
-(double)mindingInterval;
-(void)setMindingInterval:(double)arg1 ;
-(BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
-(id)initWithMovie:(id)arg1 mindingInterval:(double)arg2 ;
-(NSArray *)movies;
-(void)addFragmentedMovie:(id)arg1 ;
-(void)removeFragmentedMovie:(id)arg1 ;
@end

