/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@class NSArray, OKMediaFeeder, OKProducerPreset;

@interface OKProducerSettings : NSObject {

	NSArray* _guidelines;
	OKMediaFeeder* _mediaFeeder;
	NSArray* _audioURLs;
	OKProducerPreset* _preset;

}

@property (retain) OKProducerPreset * preset;                //@synthesize preset=_preset - In the implementation block
@property (retain) NSArray * guidelines;                     //@synthesize guidelines=_guidelines - In the implementation block
@property (retain) OKMediaFeeder * mediaFeeder;              //@synthesize mediaFeeder=_mediaFeeder - In the implementation block
@property (retain) NSArray * audioURLs; 
-(void)dealloc;
-(void)setPreset:(OKProducerPreset *)arg1 ;
-(OKProducerPreset *)preset;
-(NSArray *)audioURLs;
-(void)setAudioURLs:(NSArray *)arg1 ;
-(NSArray *)guidelines;
-(void)setGuidelines:(NSArray *)arg1 ;
-(void)setMediaFeeder:(OKMediaFeeder *)arg1 ;
-(OKMediaFeeder *)mediaFeeder;
@end

