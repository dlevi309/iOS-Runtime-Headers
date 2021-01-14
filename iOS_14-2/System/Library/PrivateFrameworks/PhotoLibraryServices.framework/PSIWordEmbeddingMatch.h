/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)word;
-(double)score;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)extendedWord;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithWord:(id)arg1 extendedWord:(id)arg2 score:(double)arg3 ;
@end

