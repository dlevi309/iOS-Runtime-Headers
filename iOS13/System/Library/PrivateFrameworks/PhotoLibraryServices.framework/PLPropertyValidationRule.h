/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)predicate;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)reverseRule;
-(id)keyPaths;
-(id)currentValuesOfObject:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 outMessage:(id*)arg2 ;
-(id)descriptionOfCurrentValuesOfObject:(id)arg1 ;
-(id<NSObject>)expectedValue;
-(void)setExpectedValue:(id<NSObject>)arg1 ;
-(id<NSObject>)expectedValueRangeLow;
-(void)setExpectedValueRangeLow:(id<NSObject>)arg1 ;
-(id<NSObject>)expectedValueRangeHigh;
-(void)setExpectedValueRangeHigh:(id<NSObject>)arg1 ;
-(NSArray *)expectedValues;
-(void)setExpectedValues:(NSArray *)arg1 ;
@end

