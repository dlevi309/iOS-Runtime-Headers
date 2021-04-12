/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXMediaEvent.h>

@interface SXMediaExposureEvent : SXMediaEvent {

	unsigned long long _numberOfImagesExposed;
	unsigned long long _numberOfImages;

}

@property (assign,nonatomic) unsigned long long numberOfImagesExposed;              //@synthesize numberOfImagesExposed=_numberOfImagesExposed - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfImages;                     //@synthesize numberOfImages=_numberOfImages - In the implementation block
-(unsigned long long)numberOfImages;
-(void)setNumberOfImages:(unsigned long long)arg1 ;
-(void)setNumberOfImagesExposed:(unsigned long long)arg1 ;
-(unsigned long long)numberOfImagesExposed;
@end

