/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finish;
-(void)addSegments:(id)arg1 ;
-(NSData *)hlsPlaylist;
-(NSURL *)url;
-(void)addSegment:(id)arg1 ;
-(NSMutableString *)hlsPlaylistString;
-(id)initWithClip:(id)arg1 url:(id)arg2 ;
@end

