/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class NSArray;

@interface _RERoutineData : NSObject <REAutomaticExportedInterface> {

	long long _mode;
	NSArray* _locationsOfInterest;

}

@property (assign,nonatomic) long long mode;                             //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSArray * locationsOfInterest;              //@synthesize locationsOfInterest=_locationsOfInterest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(NSArray *)locationsOfInterest;
-(void)setLocationsOfInterest:(NSArray *)arg1 ;
-(BOOL)isEqualToRoutineData:(id)arg1 ;
@end

