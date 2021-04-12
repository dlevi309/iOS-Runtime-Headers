/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAudioURLs:(NSArray *)arg1 ;
-(NSArray *)guidelines;
-(NSArray *)audioURLs;
-(void)setPreset:(OKProducerPreset *)arg1 ;
-(OKProducerPreset *)preset;
-(void)dealloc;
-(void)setGuidelines:(NSArray *)arg1 ;
-(void)setMediaFeeder:(OKMediaFeeder *)arg1 ;
-(OKMediaFeeder *)mediaFeeder;
@end

