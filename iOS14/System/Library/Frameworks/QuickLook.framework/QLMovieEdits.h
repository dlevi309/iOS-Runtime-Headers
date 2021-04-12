/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)rotated;
-(id)init;
-(void)resetEditingValues;
-(void)setRightRotationsCount:(unsigned long long)arg1 ;
-(unsigned long long)rightRotationsCount;
-(void)resetTrimmingValues;
-(void)incrementRightRotationsCount;
-(BOOL)trimmed;
-(void)setTrimEndTime:(double)arg1 ;
-(double)trimEndTime;
-(void)setTrimStartTime:(double)arg1 ;
-(double)trimStartTime;
-(BOOL)hasEdits;
-(BOOL)isEqual:(id)arg1 ;
@end

