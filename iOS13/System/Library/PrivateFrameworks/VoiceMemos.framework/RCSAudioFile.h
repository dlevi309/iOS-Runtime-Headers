/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)settings;
-(AVAudioFormat *)processingFormat;
-(AVAudioFormat *)fileFormat;

@end

