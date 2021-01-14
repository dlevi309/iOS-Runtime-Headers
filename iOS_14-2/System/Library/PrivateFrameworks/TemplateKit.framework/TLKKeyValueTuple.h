/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setValue:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)value;
@end

