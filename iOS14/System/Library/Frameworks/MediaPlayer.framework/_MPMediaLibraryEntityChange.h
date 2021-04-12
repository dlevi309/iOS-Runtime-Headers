/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)deletionType;
-(id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(long long)arg3 ;
-(NSString *)anchor;
@end

