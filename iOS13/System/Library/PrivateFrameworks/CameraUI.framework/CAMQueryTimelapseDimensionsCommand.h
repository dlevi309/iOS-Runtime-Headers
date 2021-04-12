/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMQueryTimelapseDimensionsCommand : CAMCaptureCommand {

	/*^block*/id __completionBlock;

}

@property (setter=_setCompletionBlock:,nonatomic,copy) id _completionBlock;              //@synthesize _completionBlock=__completionBlock - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_completionBlock;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
@end

