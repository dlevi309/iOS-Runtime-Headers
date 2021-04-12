/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString;

@interface PGMoodSourceSceneIdentifier : NSObject {

	BOOL _isDistributed;
	BOOL _isHighConfidence;
	NSString* _moodIdentifier;

}

@property (retain) NSString * moodIdentifier;              //@synthesize moodIdentifier=_moodIdentifier - In the implementation block
@property (assign) BOOL isDistributed;                     //@synthesize isDistributed=_isDistributed - In the implementation block
@property (assign) BOOL isHighConfidence;                  //@synthesize isHighConfidence=_isHighConfidence - In the implementation block
-(BOOL)isHighConfidence;
-(NSString *)moodIdentifier;
-(void)setMoodIdentifier:(NSString *)arg1 ;
-(BOOL)isDistributed;
-(void)setIsDistributed:(BOOL)arg1 ;
-(void)setIsHighConfidence:(BOOL)arg1 ;
@end

