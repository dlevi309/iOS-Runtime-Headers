/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/_EARSystemResult.h>

@class NSArray;

@interface _EARCombinedResult : _EARSystemResult {

	NSArray* _nBestStrings;
	NSArray* _nBestSourceIndexes;
	NSArray* _originalRanks;

}

@property (nonatomic,copy) NSArray * nBestStrings;                    //@synthesize nBestStrings=_nBestStrings - In the implementation block
@property (nonatomic,copy) NSArray * nBestSourceIndexes;              //@synthesize nBestSourceIndexes=_nBestSourceIndexes - In the implementation block
@property (nonatomic,copy) NSArray * originalRanks;                   //@synthesize originalRanks=_originalRanks - In the implementation block
-(NSArray *)nBestStrings;
-(void)setNBestStrings:(NSArray *)arg1 ;
-(NSArray *)nBestSourceIndexes;
-(void)setNBestSourceIndexes:(NSArray *)arg1 ;
-(NSArray *)originalRanks;
-(void)setOriginalRanks:(NSArray *)arg1 ;
@end

