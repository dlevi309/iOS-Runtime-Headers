/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(MiroBlueprint *)data;
-(void)setData:(MiroBlueprint *)arg1 ;
-(NSString *)fontName;
-(long long)mood;
-(VEKSong *)song;
-(void)setSong:(VEKSong *)arg1 ;
-(long long)titleStyle;
-(void)setTitleStyle:(long long)arg1 ;
-(id)moodIDmap;
-(id)initWithMood:(long long)arg1 ;
-(long long)editStyle;
-(double)idealDurationForAsset:(id)arg1 ;
-(long long)moodForMoodID:(id)arg1 ;
-(id)moodIDForMood:(long long)arg1 ;
-(void)setEditStyle:(long long)arg1 ;
@end

