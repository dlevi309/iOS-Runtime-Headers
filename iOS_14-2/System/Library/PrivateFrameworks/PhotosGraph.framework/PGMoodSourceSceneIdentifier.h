/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

