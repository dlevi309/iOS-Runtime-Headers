/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSString;

@interface MNTraceMiscInfo : NSObject {

	NSString* _key;
	long long _intValue;
	double _doubleValue;
	NSString* _stringValue;

}

@property (nonatomic,copy) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long intValue;                //@synthesize intValue=_intValue - In the implementation block
@property (assign,nonatomic) double doubleValue;                //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,copy) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
-(double)doubleValue;
-(long long)intValue;
-(NSString *)key;
-(NSString *)stringValue;
-(void)setKey:(NSString *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setIntValue:(long long)arg1 ;
@end

