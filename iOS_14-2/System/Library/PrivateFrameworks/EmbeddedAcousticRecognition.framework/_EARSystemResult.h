/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setConfidences:(NSArray *)arg1 ;
-(void)setSausage:(NSArray *)arg1 ;
-(NSArray *)nBestIndexes;
-(void)setNBestIndexes:(NSArray *)arg1 ;
@end

