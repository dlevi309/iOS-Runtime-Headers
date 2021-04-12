/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@class NSArray;

@interface _EARSystemResult : NSObject {

	NSArray* _sausage;
	NSArray* _nBestIndexes;
	NSArray* _confidences;

}

@property (nonatomic,copy) NSArray * sausage;                   //@synthesize sausage=_sausage - In the implementation block
@property (nonatomic,copy) NSArray * nBestIndexes;              //@synthesize nBestIndexes=_nBestIndexes - In the implementation block
@property (nonatomic,copy) NSArray * confidences;               //@synthesize confidences=_confidences - In the implementation block
-(NSArray *)confidences;
-(NSArray *)sausage;
-(void)setSausage:(NSArray *)arg1 ;
-(NSArray *)nBestIndexes;
-(void)setNBestIndexes:(NSArray *)arg1 ;
-(void)setConfidences:(NSArray *)arg1 ;
@end

