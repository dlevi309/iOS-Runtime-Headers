/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, NSString;

@interface TextRow : NSObject <NSCopying> {

	NSMutableArray* _mutableTokens;
	double _cachedScore;

}

@property (nonatomic,retain) NSMutableArray * mutableTokens;              //@synthesize mutableTokens=_mutableTokens - In the implementation block
@property (assign) double cachedScore;                                    //@synthesize cachedScore=_cachedScore - In the implementation block
@property (nonatomic,retain,readonly) NSArray * tokens; 
@property (readonly) unsigned long long tokenCount; 
@property (readonly) NSString * string; 
@property (readonly) double score; 
@property (readonly) NSArray * features; 
-(id)init;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)score;
-(NSArray *)features;
-(NSArray *)tokens;
-(void)addToken:(id)arg1 ;
-(unsigned long long)tokenCount;
-(void)setMutableTokens:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableTokens;
-(double)cachedScore;
-(void)setCachedScore:(double)arg1 ;
@end

