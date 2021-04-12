/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MSVLyricsXMLElement.h>

@class NSString;

@interface MSVLyricsAgent : MSVLyricsXMLElement {

	NSString* _type;
	NSString* _name;
	NSString* _artistID;

}

@property (nonatomic,copy) NSString * type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * artistID;              //@synthesize artistID=_artistID - In the implementation block
-(id)description;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setArtistID:(NSString *)arg1 ;
-(NSString *)artistID;
@end

