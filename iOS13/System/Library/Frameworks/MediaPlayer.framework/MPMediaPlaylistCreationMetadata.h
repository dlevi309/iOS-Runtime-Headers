/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString;

@interface MPMediaPlaylistCreationMetadata : NSObject {

	NSString* _defaultAuthorDisplayName;
	NSString* _name;
	NSString* _authorDisplayName;
	NSString* _descriptionText;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * authorDisplayName;              //@synthesize authorDisplayName=_authorDisplayName - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                //@synthesize descriptionText=_descriptionText - In the implementation block
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)authorDisplayName;
-(void)setAuthorDisplayName:(NSString *)arg1 ;
@end

