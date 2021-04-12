/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) unsigned long long properties; 
@property (assign,nonatomic) long long substrokeCount; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(void)setWordID:(unsigned)arg1 ;
-(void)setCombinedScore:(double)arg1 ;
-(void)setStrokeIndexes:(NSIndexSet *)arg1 ;
-(void)setRecognitionScore:(double)arg1 ;
-(void)setSubstrokeCount:(long long)arg1 ;
@end

