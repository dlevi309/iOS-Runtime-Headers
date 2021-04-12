/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)key;
-(NSDictionary *)map;
-(id)bitValueForString:(id)arg1 ;
-(id)initWithKey:(id)arg1 bitValueMapsDirectory:(id)arg2 ;
@end

