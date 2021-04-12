/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSString, NSDictionary;

@interface IKCSSToken : NSObject {

	unsigned short _charValue;
	long long _type;
	double _doubleValue;
	NSString* _stringValue;
	NSDictionary* _properties;
	NSRange _range;

}

@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned short charValue;               //@synthesize charValue=_charValue - In the implementation block
@property (assign,nonatomic) double doubleValue;                     //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                 //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) NSRange range;                          //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(double)doubleValue;
-(NSDictionary *)properties;
-(NSRange)range;
-(void)setDoubleValue:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(unsigned short)charValue;
-(long long)type;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setCharValue:(unsigned short)arg1 ;
@end

