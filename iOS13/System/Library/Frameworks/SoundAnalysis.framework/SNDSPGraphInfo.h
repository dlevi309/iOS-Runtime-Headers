/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SNDSPItemInfo.h>

@class NSString, NSArray, NSDictionary;

@interface SNDSPGraphInfo : SNDSPItemInfo {

	NSString* _path;
	NSString* _text;
	NSArray* _includePaths;
	NSDictionary* _substitutions;

}

@property (nonatomic,retain) NSString * path;                           //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSArray * includePaths;                    //@synthesize includePaths=_includePaths - In the implementation block
@property (nonatomic,retain) NSDictionary * substitutions;              //@synthesize substitutions=_substitutions - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSDictionary *)substitutions;
-(void)setSubstitutions:(NSDictionary *)arg1 ;
-(NSArray *)includePaths;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 ;
-(void)setIncludePaths:(NSArray *)arg1 ;
@end

