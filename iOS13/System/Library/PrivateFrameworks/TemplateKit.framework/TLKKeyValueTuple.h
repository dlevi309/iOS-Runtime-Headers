/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKObject.h>

@class NSString;

@interface TLKKeyValueTuple : TLKObject {

	NSString* _key;
	NSString* _value;

}

@property (nonatomic,retain) NSString * key;                //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
+(id)tupleWithKey:(id)arg1 value:(id)arg2 ;
+(id)tuplesForDictionary:(id)arg1 ;
+(id)tuplesForKeys:(id)arg1 values:(id)arg2 ;
-(NSString *)key;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

