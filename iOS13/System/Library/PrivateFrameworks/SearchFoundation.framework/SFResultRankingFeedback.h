/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFSearchResult, NSArray;

@interface SFResultRankingFeedback : SFFeedback <NSCopying> {

	SFSearchResult* _result;
	NSArray* _hiddenResults;
	NSArray* _duplicateResults;
	unsigned long long _localResultPosition;
	double _personalizationScore;

}

@property (nonatomic,retain) SFSearchResult * result;                             //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSArray * hiddenResults;                               //@synthesize hiddenResults=_hiddenResults - In the implementation block
@property (nonatomic,copy) NSArray * duplicateResults;                            //@synthesize duplicateResults=_duplicateResults - In the implementation block
@property (assign,nonatomic) unsigned long long localResultPosition;              //@synthesize localResultPosition=_localResultPosition - In the implementation block
@property (assign,nonatomic) double personalizationScore;                         //@synthesize personalizationScore=_personalizationScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFSearchResult *)result;
-(void)setResult:(SFSearchResult *)arg1 ;
-(double)personalizationScore;
-(void)setPersonalizationScore:(double)arg1 ;
-(id)initWithResult:(id)arg1 hiddenResults:(id)arg2 duplicateResults:(id)arg3 localResultPosition:(unsigned long long)arg4 ;
-(NSArray *)hiddenResults;
-(void)setHiddenResults:(NSArray *)arg1 ;
-(NSArray *)duplicateResults;
-(void)setDuplicateResults:(NSArray *)arg1 ;
-(unsigned long long)localResultPosition;
-(void)setLocalResultPosition:(unsigned long long)arg1 ;
@end

