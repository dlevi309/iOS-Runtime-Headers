/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MSVLyricsXMLElement.h>

@class NSString;

@interface MSVLyricsSongWriter : MSVLyricsXMLElement {

	NSString* _name;
	NSString* _artistID;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * artistID;              //@synthesize artistID=_artistID - In the implementation block
-(NSString *)artistID;
-(id)init;
-(NSString *)name;
-(id)description;
-(void)setArtistID:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

