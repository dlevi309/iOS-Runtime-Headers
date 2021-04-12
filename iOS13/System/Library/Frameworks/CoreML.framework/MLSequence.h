/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSArray;

@interface MLSequence : NSObject {

	long long _type;
	NSArray* _values;

}

@property (nonatomic,readonly) NSArray * featureValues; 
@property (nonatomic,readonly) NSArray * values;                     //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * stringValues; 
@property (nonatomic,readonly) NSArray * int64Values; 
+(id)emptySequenceWithType:(long long)arg1 ;
+(id)sequenceFromArray:(id)arg1 error:(id*)arg2 ;
+(id)sequenceWithStringArray:(id)arg1 ;
+(id)sequenceWithInt64Array:(id)arg1 ;
-(long long)type;
-(NSArray *)values;
-(id)initWithArray:(id)arg1 type:(long long)arg2 ;
-(NSArray *)stringValues;
-(NSArray *)int64Values;
-(NSArray *)featureValues;
@end

