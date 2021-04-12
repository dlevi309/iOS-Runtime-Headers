/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADEmbeddedMediaFile.h>

@interface OADWavAudioFile : OADEmbeddedMediaFile {

	float mDuration;
	BOOL mHasDuration;

}

@property (assign,nonatomic) float duration; 
@property (assign,nonatomic) BOOL hasDuration; 
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)isAudioOnly;
-(void)setIsAudioOnly:(BOOL)arg1 ;
@end

