/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PSIWordEmbeddingMatch : NSObject <NSSecureCoding> {

	NSString* _word;
	NSString* _extendedWord;
	double _score;

}

@property (readonly) NSString * word;                      //@synthesize word=_word - In the implementation block
@property (readonly) NSString * extendedWord;              //@synthesize extendedWord=_extendedWord - In the implementation block
@property (readonly) double score;                         //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)score;
-(NSString *)extendedWord;
-(NSString *)word;
-(id)initWithWord:(id)arg1 extendedWord:(id)arg2 score:(double)arg3 ;
@end

