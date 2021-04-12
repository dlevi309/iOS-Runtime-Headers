/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDoubleValue:(double)arg1 ;
-(NSString *)stringValue;
-(void)setIntValue:(long long)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)key;
-(long long)intValue;
-(void)setKey:(NSString *)arg1 ;
@end

