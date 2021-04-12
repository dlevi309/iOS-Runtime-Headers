/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXMediaEvent.h>

@interface SXMediaExposureEvent : SXMediaEvent {

	unsigned long long _numberOfImagesExposed;
	unsigned long long _numberOfImages;

}

@property (assign,nonatomic) unsigned long long numberOfImagesExposed;              //@synthesize numberOfImagesExposed=_numberOfImagesExposed - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfImages;                     //@synthesize numberOfImages=_numberOfImages - In the implementation block
-(void)setNumberOfImages:(unsigned long long)arg1 ;
-(unsigned long long)numberOfImages;
-(void)setNumberOfImagesExposed:(unsigned long long)arg1 ;
-(unsigned long long)numberOfImagesExposed;
@end

