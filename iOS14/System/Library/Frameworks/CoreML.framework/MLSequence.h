/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MLSequence : NSObject <NSSecureCoding> {

	long long _type;
	NSArray* _values;

}

@property (nonatomic,readonly) NSArray * featureValues; 
@property (nonatomic,readonly) NSArray * values;                     //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * stringValues; 
@property (nonatomic,readonly) NSArray * int64Values; 
+(BOOL)supportsSecureCoding;
+(id)emptySequenceWithType:(long long)arg1 ;
+(id)sequenceFromArray:(id)arg1 error:(id*)arg2 ;
+(id)sequenceWithInt64Array:(id)arg1 ;
+(id)sequenceWithStringArray:(id)arg1 ;
-(id)initWithArray:(id)arg1 type:(long long)arg2 ;
-(NSArray *)stringValues;
-(NSArray *)int64Values;
-(NSArray *)values;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)featureValues;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
@end

