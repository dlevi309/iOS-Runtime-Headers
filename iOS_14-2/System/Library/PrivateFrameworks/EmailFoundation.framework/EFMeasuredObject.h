/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface EFMeasuredObject : NSObject {

	id _object;
	double _measure;

}

@property (nonatomic,retain) id object;                   //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) double measure;              //@synthesize measure=_measure - In the implementation block
+(id)object:(id)arg1 withMeasure:(double)arg2 ;
+(id)reverseSortedObjects:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)max:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)description;
-(double)measure;
-(id)initWithObject:(id)arg1 measure:(double)arg2 ;
-(void)setMeasure:(double)arg1 ;
@end

