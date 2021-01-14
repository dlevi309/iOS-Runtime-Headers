/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSString, NSDictionary;

@interface _DPBitValueMap : NSObject {

	NSString* _key;
	NSDictionary* _map;

}

@property (nonatomic,copy,readonly) NSString * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSDictionary * map;               //@synthesize map=_map - In the implementation block
+(void)initialize;
+(id)bitValueMapForKey:(id)arg1 ;
+(id)bitValueMapForKey:(id)arg1 fromConfigurationsFile:(id)arg2 ;
+(id)bitValueMapForKey:(id)arg1 bitValueMapsDirectory:(id)arg2 ;
+(void)removeBitValueMapForKey:(id)arg1 ;
-(id)init;
-(NSDictionary *)map;
-(NSString *)key;
-(id)bitValueForString:(id)arg1 ;
-(id)initWithKey:(id)arg1 bitValueMapsDirectory:(id)arg2 ;
@end

