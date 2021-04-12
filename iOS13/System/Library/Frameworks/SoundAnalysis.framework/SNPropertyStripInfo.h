/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDictionary *)value;
-(NSString *)path;
-(NSString *)resourcePath;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 ;
@end

