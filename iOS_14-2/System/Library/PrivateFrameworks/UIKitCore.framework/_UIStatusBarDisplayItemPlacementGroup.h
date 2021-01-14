/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface _UIStatusBarDisplayItemPlacementGroup : NSObject {

	NSArray* _placements;
	long long _minimumPriority;
	long long _maximumPriority;

}

@property (nonatomic,copy) NSArray * placements;                       //@synthesize placements=_placements - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) long long minimumPriority;              //@synthesize minimumPriority=_minimumPriority - In the implementation block
@property (nonatomic,readonly) long long maximumPriority;              //@synthesize maximumPriority=_maximumPriority - In the implementation block
+(id)groupWithPriority:(long long)arg1 placements:(id)arg2 ;
-(BOOL)enabled;
-(void)setPlacements:(NSArray *)arg1 ;
-(NSArray *)placements;
-(long long)minimumPriority;
-(long long)maximumPriority;
-(void)setEnabled:(BOOL)arg1 ;
@end

