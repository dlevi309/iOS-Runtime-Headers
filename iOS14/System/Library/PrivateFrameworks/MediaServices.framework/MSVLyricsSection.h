/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
-(id)init;
-(id)description;
-(long long)songPart;
-(void)setSongPartText:(NSString *)arg1 ;
-(NSString *)songPartText;
-(void)setSongPart:(long long)arg1 ;
@end

