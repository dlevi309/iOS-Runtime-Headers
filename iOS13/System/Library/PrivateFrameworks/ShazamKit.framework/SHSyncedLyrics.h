/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@class NSArray, NSString;

@interface SHSyncedLyrics : NSObject {

	NSArray* _lyricLines;
	NSString* _attribution;

}

@property (nonatomic,retain) NSArray * lyricLines;              //@synthesize lyricLines=_lyricLines - In the implementation block
@property (nonatomic,copy) NSString * attribution;              //@synthesize attribution=_attribution - In the implementation block
+(id)syncedLyricsFromLyricLines:(id)arg1 attribution:(id)arg2 ;
-(NSString *)attribution;
-(void)setAttribution:(NSString *)arg1 ;
-(NSArray *)lyricLines;
-(void)setLyricLines:(NSArray *)arg1 ;
@end

