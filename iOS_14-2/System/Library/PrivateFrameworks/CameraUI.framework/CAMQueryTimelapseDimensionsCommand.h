/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMQueryTimelapseDimensionsCommand : CAMCaptureCommand {

	/*^block*/id __completionBlock;

}

@property (setter=_setCompletionBlock:,nonatomic,copy) id _completionBlock;              //@synthesize _completionBlock=__completionBlock - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(id)_completionBlock;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

