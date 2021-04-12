/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
*/


@interface TTSUTF8Offset : NSObject {

	long long _cStringOffset;
	long long _actualPos;
	long long _actualLength;
	long long _lengthDifference;

}

@property (assign,nonatomic) long long cStringOffset;                 //@synthesize cStringOffset=_cStringOffset - In the implementation block
@property (assign,nonatomic) long long actualPos;                     //@synthesize actualPos=_actualPos - In the implementation block
@property (assign,nonatomic) long long actualLength;                  //@synthesize actualLength=_actualLength - In the implementation block
@property (assign,nonatomic) long long lengthDifference;              //@synthesize lengthDifference=_lengthDifference - In the implementation block
-(id)description;
-(long long)actualLength;
-(long long)cStringOffset;
-(long long)lengthDifference;
-(long long)actualPos;
-(void)setCStringOffset:(long long)arg1 ;
-(void)setActualPos:(long long)arg1 ;
-(void)setActualLength:(long long)arg1 ;
-(void)setLengthDifference:(long long)arg1 ;
@end

