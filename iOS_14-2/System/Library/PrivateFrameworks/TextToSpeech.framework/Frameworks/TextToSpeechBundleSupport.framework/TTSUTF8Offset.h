/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)actualLength;
-(id)description;
-(long long)cStringOffset;
-(long long)lengthDifference;
-(long long)actualPos;
-(void)setCStringOffset:(long long)arg1 ;
-(void)setActualPos:(long long)arg1 ;
-(void)setActualLength:(long long)arg1 ;
-(void)setLengthDifference:(long long)arg1 ;
@end

