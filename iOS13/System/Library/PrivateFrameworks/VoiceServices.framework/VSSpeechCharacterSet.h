/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@class NSCharacterSet;

@interface VSSpeechCharacterSet : NSObject {

	NSCharacterSet* _characterSet;

}

@property (nonatomic,retain) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
+(id)languageMapping;
-(NSCharacterSet *)characterSet;
-(void)setCharacterSet:(NSCharacterSet *)arg1 ;
-(id)initWithLanguage:(id)arg1 ;
-(id)unspeakableRangeOfText:(id)arg1 ;
@end

