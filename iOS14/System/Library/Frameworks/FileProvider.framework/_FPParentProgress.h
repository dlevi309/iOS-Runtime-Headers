/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <Foundation/NSProgress.h>

@class FPProgressProxy;

@interface _FPParentProgress : NSProgress {

	FPProgressProxy* _progressProxy;

}

@property (readonly) FPProgressProxy * progressProxy;              //@synthesize progressProxy=_progressProxy - In the implementation block
-(FPProgressProxy *)progressProxy;
-(void)setProgressProxy:(FPProgressProxy *)arg1 ;
@end

