/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class VSSpeechRequest;

@interface CUVoiceRequest : NSObject {

	unsigned _flags;
	/*^block*/id _completion;
	id _owner;
	VSSpeechRequest* _speechRequest;

}

@property (nonatomic,copy) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) unsigned flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) id owner;                                     //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;              //@synthesize speechRequest=_speechRequest - In the implementation block
-(unsigned)flags;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setFlags:(unsigned)arg1 ;
-(VSSpeechRequest *)speechRequest;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
@end

