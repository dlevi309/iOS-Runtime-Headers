/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol NSObject;
@class NSString, NSArray;

@interface PLPropertyValidationRule : NSObject {

	long long _type;
	NSString* _keyPath;
	id<NSObject> _expectedValue;
	id<NSObject> _expectedValueRangeLow;
	id<NSObject> _expectedValueRangeHigh;
	NSArray* _expectedValues;

}

@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * keyPath;                                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) id<NSObject> expectedValue;                       //@synthesize expectedValue=_expectedValue - In the implementation block
@property (nonatomic,retain) id<NSObject> expectedValueRangeLow;               //@synthesize expectedValueRangeLow=_expectedValueRangeLow - In the implementation block
@property (nonatomic,retain) id<NSObject> expectedValueRangeHigh;              //@synthesize expectedValueRangeHigh=_expectedValueRangeHigh - In the implementation block
@property (nonatomic,retain) NSArray * expectedValues;                         //@synthesize expectedValues=_expectedValues - In the implementation block
-(id)keyPaths;
-(id)predicate;
-(id)reverseRule;
-(id<NSObject>)expectedValue;
-(BOOL)evaluateWithObject:(id)arg1 outMessage:(id*)arg2 ;
-(id)descriptionOfCurrentValuesOfObject:(id)arg1 ;
-(void)setExpectedValue:(id<NSObject>)arg1 ;
-(id<NSObject>)expectedValueRangeLow;
-(void)setExpectedValueRangeLow:(id<NSObject>)arg1 ;
-(id<NSObject>)expectedValueRangeHigh;
-(void)setExpectedValueRangeHigh:(id<NSObject>)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(long long)type;
-(NSString *)keyPath;
-(void)setExpectedValues:(NSArray *)arg1 ;
-(NSArray *)expectedValues;
-(id)currentValuesOfObject:(id)arg1 ;
@end

