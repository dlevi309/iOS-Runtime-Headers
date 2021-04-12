/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoBooksComplicationsCompanion.bundle/NanoBooksComplicationsCompanion
*/


@class NSString, NSNumber, UIImage;

@interface NBComplicationLibraryItem : NSObject {

	NSString* _title;
	NSString* _author;
	NSNumber* _persistentID;
	UIImage* _artwork;
	NSNumber* _duration;
	NSNumber* _bookmarkTime;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * author;               //@synthesize author=_author - In the implementation block
@property (nonatomic,readonly) NSNumber * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) UIImage * artwork;                    //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSNumber * bookmarkTime;              //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
+(id)libraryItemWithMediaItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(NSNumber *)duration;
-(NSString *)author;
-(NSNumber *)persistentID;
-(UIImage *)artwork;
-(NSNumber *)bookmarkTime;
@end

