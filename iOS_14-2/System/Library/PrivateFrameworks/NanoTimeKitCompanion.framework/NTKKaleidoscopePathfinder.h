/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NTKKaleidoscopePathfinder : NSObject <NSSecureCoding> {

	float _sampleRadiusX;
	float _sampleRadiusY;
	int _cellGridWidth;
	int _cellGridHeight;
	int _pathLength;
	* _dominanceGrid;
	* _path;
	float _startRotation;

}

@property (nonatomic,readonly) int cellGridWidth;                //@synthesize cellGridWidth=_cellGridWidth - In the implementation block
@property (nonatomic,readonly) int cellGridHeight;               //@synthesize cellGridHeight=_cellGridHeight - In the implementation block
@property (nonatomic,readonly) int pathLength;                   //@synthesize pathLength=_pathLength - In the implementation block
@property (nonatomic,readonly) float startRotation;              //@synthesize startRotation=_startRotation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pathfinderFromFile:(id)arg1 ;
+(id)pathfinderWithImage:(id)arg1 ;
+(id)pathfinderFromDirectory:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 ;
-(void)dealloc;
-(BOOL)writeToDirectory:(id)arg1 ;
-(NTKKaleidoscopePathfinderPoint)pointForTime:(float)arg1 ;
-(void)adjustRotationStart:(float)arg1 ;
-(void)adjustSampleRadius:(float)arg1 ;
-(void)adjustPathStart:;
-(int)cellGridWidth;
-(int)cellGridHeight;
-(int)pathLength;
-(float)startRotation;
@end

