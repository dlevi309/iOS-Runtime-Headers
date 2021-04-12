/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSMutableString, NSURL, NSData;

@interface HMCameraClipVideoHLSPlaylistGenerator : NSObject {

	NSMutableString* _hlsPlaylistString;
	NSURL* _url;

}

@property (readonly) NSMutableString * hlsPlaylistString;              //@synthesize hlsPlaylistString=_hlsPlaylistString - In the implementation block
@property (copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (copy,readonly) NSData * hlsPlaylist; 
+(id)_hlsPlaylistEncryptionMethodNameForScheme:(unsigned long long)arg1 ;
-(NSURL *)url;
-(void)finish;
-(NSData *)hlsPlaylist;
-(NSMutableString *)hlsPlaylistString;
-(void)addSegment:(id)arg1 ;
-(id)initWithClip:(id)arg1 url:(id)arg2 ;
-(void)addSegments:(id)arg1 ;
@end

