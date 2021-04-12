/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MSVLyricsElement.h>

@class NSString, NSArray;

@interface MSVLyricsSection : MSVLyricsElement {

	long long _songPart;
	NSString* _songPartText;
	NSArray* _lines;

}

@property (assign,nonatomic) long long songPart;                 //@synthesize songPart=_songPart - In the implementation block
@property (nonatomic,copy) NSString * songPartText;              //@synthesize songPartText=_songPartText - In the implementation block
@property (nonatomic,retain) NSArray * lines;                    //@synthesize lines=_lines - In the implementation block
+(long long)_songPartForText:(id)arg1 ;
-(id)init;
-(id)description;
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
-(void)setSongPartText:(NSString *)arg1 ;
-(long long)songPart;
-(NSString *)songPartText;
-(void)setSongPart:(long long)arg1 ;
@end

