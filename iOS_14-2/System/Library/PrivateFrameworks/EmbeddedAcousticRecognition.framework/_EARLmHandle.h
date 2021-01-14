/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmHandle : NSObject {

	shared_ptr<kaldi::quasar::LmHandle>* _handle;

}

@property (nonatomic,readonly) shared_ptr<kaldi::quasar::LmHandle>* handle;              //@synthesize handle=_handle - In the implementation block
-(shared_ptr<kaldi::quasar::LmHandle>*)handle;
-(id)_initWithHandle:(shared_ptr<kaldi::quasar::LmHandle>*)arg1 ;
@end

