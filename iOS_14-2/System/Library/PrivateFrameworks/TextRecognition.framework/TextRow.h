/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)tokens;
-(void)addToken:(id)arg1 ;
-(id)init;
-(NSArray *)features;
-(double)score;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)cachedScore;
-(void)setCachedScore:(double)arg1 ;
-(unsigned long long)tokenCount;
-(void)setMutableTokens:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableTokens;
@end

