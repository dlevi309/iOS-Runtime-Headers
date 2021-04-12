/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@class NSDictionary;

@interface _EARLanguageDetectorResult : NSObject {

	BOOL _isConfident;
	NSDictionary* _confidences;

}

@property (nonatomic,copy) NSDictionary * confidences;              //@synthesize confidences=_confidences - In the implementation block
@property (assign,nonatomic) BOOL isConfident;                      //@synthesize isConfident=_isConfident - In the implementation block
-(NSDictionary *)confidences;
-(void)setConfidences:(NSDictionary *)arg1 ;
-(BOOL)isConfident;
-(void)setIsConfident:(BOOL)arg1 ;
@end

