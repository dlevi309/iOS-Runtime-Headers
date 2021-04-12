/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVOutputSettingsValidation.h>

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {

	AVMediaFileType* _fileType;

}

@property (nonatomic,readonly) AVMediaFileType * fileType; 
+(void)initialize;
+(id)mediaFileOutputSettingsValidatorForFileType:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(AVMediaFileType *)fileType;
-(id)initWithFileType:(id)arg1 ;
-(BOOL)validateAudioOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(BOOL)validateVideoOutputSettings:(id)arg1 reason:(id*)arg2 ;
@end

