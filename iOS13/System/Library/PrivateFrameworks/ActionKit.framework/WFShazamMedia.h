/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface WFShazamMedia : NSObject <WFNaming, NSSecureCoding, NSCopying> {

	BOOL _isExplicit;
	NSString* _adamID;
	NSString* _artist;
	NSString* _title;
	NSURL* _artworkURL;
	NSURL* _shazamURL;
	NSURL* _appleMusicURL;
	NSURL* _videoURL;
	NSString* _lyricsSnippet;
	NSString* _lyricsSnippetSynced;

}

@property (nonatomic,copy,readonly) NSString * adamID;                           //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * artist;                           //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSURL * artworkURL;                          //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * shazamURL;                           //@synthesize shazamURL=_shazamURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * appleMusicURL;                       //@synthesize appleMusicURL=_appleMusicURL - In the implementation block
@property (nonatomic,readonly) BOOL isExplicit;                                  //@synthesize isExplicit=_isExplicit - In the implementation block
@property (nonatomic,copy,readonly) NSURL * videoURL;                            //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * lyricsSnippet;                    //@synthesize lyricsSnippet=_lyricsSnippet - In the implementation block
@property (nonatomic,copy,readonly) NSString * lyricsSnippetSynced;              //@synthesize lyricsSnippetSynced=_lyricsSnippetSynced - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)artist;
-(NSString *)adamID;
-(NSURL *)videoURL;
-(id)initWithMediaItem:(id)arg1 ;
-(NSURL *)artworkURL;
-(BOOL)isExplicit;
-(NSString *)wfName;
-(NSURL *)shazamURL;
-(NSURL *)appleMusicURL;
-(NSString *)lyricsSnippet;
-(NSString *)lyricsSnippetSynced;
@end

