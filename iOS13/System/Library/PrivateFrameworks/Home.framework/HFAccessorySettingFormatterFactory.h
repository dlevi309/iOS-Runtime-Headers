/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSMutableDictionary;

@interface HFAccessorySettingFormatterFactory : NSObject {

	NSMutableDictionary* _formattersForKey;

}

@property (nonatomic,retain) NSMutableDictionary * formattersForKey;              //@synthesize formattersForKey=_formattersForKey - In the implementation block
+(id)defaultFactory;
+(id)_siriRecognitionLanguageFormatter;
+(id)_siriOutputVoiceFormatter;
+(id)_siriPersonalRequestsFormatter;
-(id)init;
-(id)formatterForKey:(id)arg1 ;
-(NSMutableDictionary *)formattersForKey;
-(id)_buildFormatterForKey:(id)arg1 ;
-(id)formatterForKey:(id)arg1 copy:(BOOL)arg2 ;
-(void)setFormattersForKey:(NSMutableDictionary *)arg1 ;
@end

