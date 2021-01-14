/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/RCSAudioFile.h>

@class NSURL, AVAudioFormat, NSDictionary, RCSSavedRecordingAccessToken, NSString;

@interface _RCSAudioFile : NSObject <RCSAudioFile> {

	RCSSavedRecordingAccessToken* _fileToken;

}

@property (nonatomic,retain) RCSSavedRecordingAccessToken * fileToken;              //@synthesize fileToken=_fileToken - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAudioFormat * fileFormat; 
@property (nonatomic,readonly) AVAudioFormat * processingFormat; 
@property (nonatomic,readonly) NSDictionary * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)url;
-(AVAudioFormat *)processingFormat;
-(void)setFileToken:(RCSSavedRecordingAccessToken *)arg1 ;
-(NSDictionary *)settings;
-(AVAudioFormat *)fileFormat;
-(RCSSavedRecordingAccessToken *)fileToken;
@end

