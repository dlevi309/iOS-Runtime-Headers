/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <Foundation/NSProgress.h>

@class FPProgressProxy;

@interface _FPParentProgress : NSProgress {

	FPProgressProxy* _progressProxy;

}

@property (readonly) FPProgressProxy * progressProxy;              //@synthesize progressProxy=_progressProxy - In the implementation block
-(void)setProgressProxy:(FPProgressProxy *)arg1 ;
-(FPProgressProxy *)progressProxy;
@end

