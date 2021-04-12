/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@interface QLMovieEdits : NSObject {

	unsigned long long _rightRotationsCount;
	double _trimStartTime;
	double _trimEndTime;

}

@property (assign,nonatomic) unsigned long long rightRotationsCount;              //@synthesize rightRotationsCount=_rightRotationsCount - In the implementation block
@property (assign,nonatomic) double trimStartTime;                                //@synthesize trimStartTime=_trimStartTime - In the implementation block
@property (assign,nonatomic) double trimEndTime;                                  //@synthesize trimEndTime=_trimEndTime - In the implementation block
+(id)editsWithRightRotationsCount:(unsigned long long)arg1 trimStartTime:(double)arg2 trimEndTime:(double)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(double)trimStartTime;
-(double)trimEndTime;
-(void)resetEditingValues;
-(void)setRightRotationsCount:(unsigned long long)arg1 ;
-(void)setTrimStartTime:(double)arg1 ;
-(void)setTrimEndTime:(double)arg1 ;
-(unsigned long long)rightRotationsCount;
-(void)resetTrimmingValues;
-(BOOL)rotated;
-(BOOL)trimmed;
-(void)incrementRightRotationsCount;
-(BOOL)hasEdits;
@end

