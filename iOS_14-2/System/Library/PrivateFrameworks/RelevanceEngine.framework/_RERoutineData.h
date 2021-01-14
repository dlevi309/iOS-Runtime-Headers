/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)locationsOfInterest;
-(long long)mode;
-(void)setMode:(long long)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToRoutineData:(id)arg1 ;
-(void)setLocationsOfInterest:(NSArray *)arg1 ;
@end

