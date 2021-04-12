/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class NSDictionary, NSURL, NSArray;

@interface ADNetworkProvider : NSObject {

	NSDictionary* _inputBufferMap;
	BOOL _isOutputInversed;
	NSURL* _url;
	NSArray* _layoutNames;
	CGSize _portraitInputSize;
	CGSize _landscapeInputSize;
	CGSize _portraitOutputSize;
	CGSize _landscapeOutputSize;

}

@property (assign) BOOL isOutputInversed;                   //@synthesize isOutputInversed=_isOutputInversed - In the implementation block
@property (retain) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (assign) CGSize portraitInputSize;                //@synthesize portraitInputSize=_portraitInputSize - In the implementation block
@property (assign) CGSize landscapeInputSize;               //@synthesize landscapeInputSize=_landscapeInputSize - In the implementation block
@property (assign) CGSize portraitOutputSize;               //@synthesize portraitOutputSize=_portraitOutputSize - In the implementation block
@property (assign) CGSize landscapeOutputSize;              //@synthesize landscapeOutputSize=_landscapeOutputSize - In the implementation block
@property (retain) NSArray * layoutNames;                   //@synthesize layoutNames=_layoutNames - In the implementation block
+(id)providerForNetwork:(id)arg1 prioritization:(long long)arg2 ;
+(id)getEspressoFileNameForNetwork:(id)arg1 andPriority:(long long)arg2 ;
+(id)getConfigFolderForNetwork:(id)arg1 ;
+(id)getDefaultPathForNetwork:(id)arg1 andPriority:(long long)arg2 ;
+(id)getAlternativePathForNetwork:(id)arg1 andPriority:(long long)arg2 ;
+(BOOL)getAndVerifyDimensionsFromConfig:(id)arg1 inDictionary:(id)arg2 forKey:(id)arg3 dimensions:(CGSize*)arg4 layout:(unsigned long long*)arg5 ;
+(BOOL)updateLayoutSize:(CGSize*)arg1 withSize:(CGSize)arg2 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)bufferNameForType:(id)arg1 ;
-(CGSize)portraitInputSize;
-(CGSize)portraitOutputSize;
-(BOOL)isOutputInversed;
-(id)initWithNetwork:(id)arg1 prioritization:(long long)arg2 ;
-(void)setIsOutputInversed:(BOOL)arg1 ;
-(void)setPortraitInputSize:(CGSize)arg1 ;
-(CGSize)landscapeInputSize;
-(void)setLandscapeInputSize:(CGSize)arg1 ;
-(void)setPortraitOutputSize:(CGSize)arg1 ;
-(CGSize)landscapeOutputSize;
-(void)setLandscapeOutputSize:(CGSize)arg1 ;
-(NSArray *)layoutNames;
-(void)setLayoutNames:(NSArray *)arg1 ;
@end

