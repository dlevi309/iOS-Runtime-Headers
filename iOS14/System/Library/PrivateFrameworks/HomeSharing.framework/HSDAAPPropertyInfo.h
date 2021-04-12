/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/


@class NSMutableDictionary;

@interface HSDAAPPropertyInfo : NSObject {

	NSMutableDictionary* _codeMap;
	NSMutableDictionary* _valueTypeMap;

}

@property (nonatomic,retain) NSMutableDictionary * codeMap;                   //@synthesize codeMap=_codeMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * valueTypeMap;              //@synthesize valueTypeMap=_valueTypeMap - In the implementation block
+(id)sharedContainerPropertyInfo;
+(id)sharedItemPropertyInfo;
-(NSMutableDictionary *)codeMap;
-(unsigned)elementCodeForProperty:(id)arg1 ;
-(void)mapProperty:(id)arg1 toCode:(unsigned)arg2 valueType:(long long)arg3 ;
-(long long)valueTypeForProperty:(id)arg1 ;
-(void)setValueTypeMap:(NSMutableDictionary *)arg1 ;
-(BOOL)hasInfoForProperty:(id)arg1 ;
-(id)_init;
-(void)setCodeMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)valueTypeMap;
@end

