/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSString;

@interface PKTranscriptionResult : NSObject {

	NSString* _transcription;
	BOOL _didShowHUD;

}

@property (nonatomic,copy,readonly) NSString * transcription;              //@synthesize transcription=_transcription - In the implementation block
@property (nonatomic,readonly) BOOL didShowHUD;                            //@synthesize didShowHUD=_didShowHUD - In the implementation block
-(NSString *)transcription;
-(BOOL)didShowHUD;
-(id)initWithTranscription:(id)arg1 didShowHUD:(BOOL)arg2 ;
@end

