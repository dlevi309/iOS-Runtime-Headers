/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSIndexSet;

@interface CHTokenizedTextResultToken : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _string;
	NSIndexSet* _strokeIndexes;
	unsigned _wordID;
	double _recognitionScore;
	double _combinedScore;
	double _alignmentScore;
	unsigned long long _properties;
	long long _substrokeCount;

}

@property (nonatomic,readonly) double recognitionScore; 
@property (nonatomic,readonly) double combinedScore; 
@property (nonatomic,readonly) double alignmentScore; 
@property (nonatomic,readonly) unsigned long long properties; 
@property (nonatomic,readonly) long long substrokeCount; 
@property (nonatomic,readonly) unsigned wordID;                              //@synthesize wordID=_wordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * strokeIndexes;              //@synthesize strokeIndexes=_strokeIndexes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tokenWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 alignmentScore:(double)arg6 properties:(unsigned long long)arg7 substrokeCount:(long long)arg8 ;
-(unsigned long long)properties;
-(id)init;
-(unsigned)wordID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(double)combinedScore;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(double)alignmentScore;
-(id)initWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 alignmentScore:(double)arg6 properties:(unsigned long long)arg7 substrokeCount:(long long)arg8 ;
-(NSIndexSet *)strokeIndexes;
-(long long)substrokeCount;
-(double)recognitionScore;
-(BOOL)isEqualToTokenizedTextResultToken:(id)arg1 ;
-(BOOL)isEquivalentToToken:(id)arg1 ;
@end

