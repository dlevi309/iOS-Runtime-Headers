/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/


@class NSString;

@interface ASDSelectorValue : NSObject {

	unsigned _value;
	NSString* _name;

}

@property (assign,nonatomic) unsigned value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * name;               //@synthesize name=_name - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
@end

