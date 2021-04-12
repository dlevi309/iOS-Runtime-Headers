/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/ASDDSPItemInfo.h>

@class NSString, NSDictionary;

@interface ASDAUStripInfo : ASDDSPItemInfo {

	NSString* _path;
	NSDictionary* _value;

}

@property (nonatomic,readonly) NSString * path;                   //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSDictionary * value;              //@synthesize value=_value - In the implementation block
+(BOOL)containsOnlyAUStrips:(id)arg1 ;
-(NSString *)path;
-(unsigned long long)hash;
-(NSDictionary *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 ;
@end

