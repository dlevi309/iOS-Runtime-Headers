/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADEmbeddedMediaFile.h>

@interface OADWavAudioFile : OADEmbeddedMediaFile {

	float mDuration;
	BOOL mHasDuration;

}

@property (assign,nonatomic) float duration; 
@property (assign,nonatomic) BOOL hasDuration; 
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(float)arg1 ;
-(BOOL)isAudioOnly;
-(float)duration;
-(void)setIsAudioOnly:(BOOL)arg1 ;
@end

