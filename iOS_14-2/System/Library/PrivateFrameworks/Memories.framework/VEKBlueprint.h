/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VEKSong, MiroBlueprint, NSString;

@interface VEKBlueprint : NSObject <NSSecureCoding, NSCopying> {

	long long _mood;
	VEKSong* _song;
	long long _titleStyle;
	long long _editStyle;
	MiroBlueprint* _data;

}

@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) long long mood;                   //@synthesize mood=_mood - In the implementation block
@property (nonatomic,copy) VEKSong * song;                       //@synthesize song=_song - In the implementation block
@property (assign,nonatomic) long long titleStyle;               //@synthesize titleStyle=_titleStyle - In the implementation block
@property (assign,nonatomic) long long editStyle;                //@synthesize editStyle=_editStyle - In the implementation block
@property (nonatomic,retain) MiroBlueprint * data;               //@synthesize data=_data - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)moodIDForVEKMood:(long long)arg1 ;
-(long long)mood;
-(NSString *)fontName;
-(VEKSong *)song;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setData:(MiroBlueprint *)arg1 ;
-(id)description;
-(MiroBlueprint *)data;
-(void)setSong:(VEKSong *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)titleStyle;
-(long long)editStyle;
-(void)setTitleStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)moodIDmap;
-(id)initWithMood:(long long)arg1 ;
-(double)idealDurationForAsset:(id)arg1 ;
-(long long)moodForMoodID:(id)arg1 ;
-(id)moodIDForMood:(long long)arg1 ;
-(void)setEditStyle:(long long)arg1 ;
@end

