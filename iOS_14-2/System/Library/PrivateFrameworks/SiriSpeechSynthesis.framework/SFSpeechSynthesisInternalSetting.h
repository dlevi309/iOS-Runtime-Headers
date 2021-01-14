/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/


@class NSUserDefaults, NSString;

@interface SFSpeechSynthesisInternalSetting : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                   //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,readonly) NSString * ospreyEndpointURL; 
@property (nonatomic,readonly) NSString * deviceId; 
@property (nonatomic,readonly) BOOL disableCaching; 
+(id)sharedInstance;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)defaults;
-(BOOL)disableCaching;
-(id)init;
-(NSString *)ospreyEndpointURL;
-(NSString *)deviceId;
@end

