/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHTokenizedTextResultToken.h>

@class NSString, NSIndexSet;

@interface CHMutableTokenizedTextResultToken : CHTokenizedTextResultToken

@property (nonatomic,copy) NSString * string; 
@property (nonatomic,copy) NSIndexSet * strokeIndexes; 
@property (assign,nonatomic) unsigned wordID; 
@property (assign,nonatomic) double recognitionScore; 
@property (assign,nonatomic) double combinedScore; 
@property (assign,nonatomic) double alignmentScore; 
@property (assign,nonatomic) unsigned long long properties; 
@property (assign,nonatomic) long long substrokeCount; 
-(void)setWordID:(unsigned)arg1 ;
-(void)setCombinedScore:(double)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStrokeIndexes:(NSIndexSet *)arg1 ;
-(void)setRecognitionScore:(double)arg1 ;
-(void)setAlignmentScore:(double)arg1 ;
-(void)setSubstrokeCount:(long long)arg1 ;
@end

