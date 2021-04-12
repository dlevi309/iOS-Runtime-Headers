/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface EFMeasuredObject : NSObject {

	id _object;
	double _measure;

}

@property (nonatomic,retain) id object;                   //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) double measure;              //@synthesize measure=_measure - In the implementation block
+(id)max:(id)arg1 ;
+(id)object:(id)arg1 withMeasure:(double)arg2 ;
+(id)reverseSortedObjects:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)description;
-(id)object;
-(long long)compare:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 measure:(double)arg2 ;
-(void)setMeasure:(double)arg1 ;
-(double)measure;
@end

