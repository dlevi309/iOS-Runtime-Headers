/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

