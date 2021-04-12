/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned long long _properties;
	long long _substrokeCount;

}

@property (nonatomic,readonly) double recognitionScore; 
@property (nonatomic,readonly) double combinedScore; 
@property (nonatomic,readonly) unsigned long long properties; 
@property (nonatomic,readonly) long long substrokeCount; 
@property (nonatomic,readonly) unsigned wordID;                              //@synthesize wordID=_wordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * strokeIndexes;              //@synthesize strokeIndexes=_strokeIndexes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tokenWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 properties:(unsigned long long)arg6 substrokeCount:(long long)arg7 ;
-(id)init;
-(NSString *)string;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)properties;
-(unsigned)wordID;
-(double)combinedScore;
-(id)initWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 properties:(unsigned long long)arg6 substrokeCount:(long long)arg7 ;
-(NSIndexSet *)strokeIndexes;
-(long long)substrokeCount;
-(double)recognitionScore;
-(BOOL)isEqualToTokenizedTextResultToken:(id)arg1 ;
-(BOOL)isEquivalentToToken:(id)arg1 ;
@end

