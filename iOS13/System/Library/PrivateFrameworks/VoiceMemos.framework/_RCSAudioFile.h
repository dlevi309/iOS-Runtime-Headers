/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/RCSAudioFile.h>

@class NSURL, AVAudioFormat, NSDictionary, RCSSavedRecordingAccessToken, NSString;

@interface _RCSAudioFile : NSObject <RCSAudioFile> {

	RCSSavedRecordingAccessToken* _fileToken;

}

@property (nonatomic,retain) RCSSavedRecordingAccessToken * fileToken;              //@synthesize fileToken=_fileToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAudioFormat * fileFormat; 
@property (nonatomic,readonly) AVAudioFormat * processingFormat; 
@property (nonatomic,readonly) NSDictionary * settings; 
-(NSURL *)url;
-(NSDictionary *)settings;
-(AVAudioFormat *)processingFormat;
-(AVAudioFormat *)fileFormat;
-(RCSSavedRecordingAccessToken *)fileToken;
-(void)setFileToken:(RCSSavedRecordingAccessToken *)arg1 ;
@end

