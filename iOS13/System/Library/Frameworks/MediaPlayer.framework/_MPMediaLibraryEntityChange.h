/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject {

	MPMediaEntity* _entity;
	NSString* _anchor;
	long long _deletionType;

}

@property (nonatomic,readonly) MPMediaEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy,readonly) NSString * anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) long long deletionType;              //@synthesize deletionType=_deletionType - In the implementation block
-(MPMediaEntity *)entity;
-(NSString *)anchor;
-(id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(long long)arg3 ;
-(long long)deletionType;
@end

