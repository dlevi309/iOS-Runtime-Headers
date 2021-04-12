/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSMutableDictionary;

@interface ICDAAPPropertyInfo : NSObject {

	NSMutableDictionary* _codeMap;
	NSMutableDictionary* _valueTypeMap;

}

@property (nonatomic,retain) NSMutableDictionary * codeMap;                   //@synthesize codeMap=_codeMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * valueTypeMap;              //@synthesize valueTypeMap=_valueTypeMap - In the implementation block
+(id)sharedContainerPropertyInfo;
+(id)sharedItemPropertyInfo;
-(id)_init;
-(NSMutableDictionary *)codeMap;
-(BOOL)hasInfoForProperty:(id)arg1 ;
-(void)mapProperty:(id)arg1 toCode:(unsigned)arg2 valueType:(long long)arg3 ;
-(unsigned)elementCodeForProperty:(id)arg1 ;
-(long long)valueTypeForProperty:(id)arg1 ;
-(void)setCodeMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)valueTypeMap;
-(void)setValueTypeMap:(NSMutableDictionary *)arg1 ;
@end

