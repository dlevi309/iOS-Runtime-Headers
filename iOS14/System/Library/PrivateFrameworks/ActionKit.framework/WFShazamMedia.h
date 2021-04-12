/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface WFShazamMedia : NSObject <WFNaming, NSSecureCoding, NSCopying> {

	BOOL _isExplicit;
	NSString* _appleMusicID;
	NSString* _artist;
	NSString* _title;
	NSURL* _artworkURL;
	NSURL* _shazamURL;
	NSURL* _appleMusicURL;
	NSURL* _videoURL;
	NSString* _lyricsSnippet;
	NSString* _lyricsSnippetSynced;

}

@property (nonatomic,copy,readonly) NSString * appleMusicID;                     //@synthesize appleMusicID=_appleMusicID - In the implementation block
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
-(NSURL *)artworkURL;
-(id)initWithMediaItem:(id)arg1 ;
-(NSString *)artist;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)wfName;
-(id)description;
-(BOOL)isExplicit;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)videoURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(NSURL *)appleMusicURL;
-(NSString *)appleMusicID;
-(NSString *)lyricsSnippet;
-(NSURL *)shazamURL;
-(NSString *)lyricsSnippetSynced;
@end

