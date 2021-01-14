/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@class NSString;

@interface VSAudioPreviewDelegate : NSObject <AVAudioPlayerDelegate> {

	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
@end

