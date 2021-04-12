/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

@class NSURL, AVAudioFormat, NSDictionary;


@protocol RCSAudioFile <NSObject>
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAudioFormat * fileFormat; 
@property (nonatomic,readonly) AVAudioFormat * processingFormat; 
@property (nonatomic,readonly) NSDictionary * settings; 
@required
-(NSURL *)url;
-(AVAudioFormat *)processingFormat;
-(NSDictionary *)settings;
-(AVAudioFormat *)fileFormat;

@end

