/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SNDSPItemInfo.h>

@class NSString, NSDictionary;

@interface SNPropertyStripInfo : SNDSPItemInfo {

	NSString* _path;
	NSString* _resourcePath;
	NSDictionary* _value;

}

@property (nonatomic,readonly) NSString * path;                      //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * resourcePath;              //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * value;                 //@synthesize value=_value - In the implementation block
-(NSString *)resourcePath;
-(NSString *)path;
-(unsigned long long)hash;
-(NSDictionary *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 ;
@end

