/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/ASDDSPItemInfo.h>

@class NSString, NSArray, NSDictionary;

@interface ASDDSPGraphInfo : ASDDSPItemInfo {

	NSString* _path;
	NSString* _text;
	NSArray* _includePaths;
	NSDictionary* _substitutions;

}

@property (nonatomic,copy) NSString * path;                           //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * includePaths;                    //@synthesize includePaths=_includePaths - In the implementation block
@property (nonatomic,copy) NSDictionary * substitutions;              //@synthesize substitutions=_substitutions - In the implementation block
-(void)setPath:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)path;
-(NSDictionary *)substitutions;
-(void)setSubstitutions:(NSDictionary *)arg1 ;
-(NSString *)text;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 ;
-(NSArray *)includePaths;
-(void)setIncludePaths:(NSArray *)arg1 ;
@end

