/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@class NSString;

@interface MREMeta : NSObject {

	unsigned long long _trackId;
	unsigned long long _songId;
	NSString* _title;
	NSString* _artist;

}

@property (nonatomic,readonly) unsigned long long trackId;              //@synthesize trackId=_trackId - In the implementation block
@property (nonatomic,readonly) unsigned long long songId;               //@synthesize songId=_songId - In the implementation block
@property (nonatomic,retain,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain,readonly) NSString * artist;                //@synthesize artist=_artist - In the implementation block
-(void)dealloc;
-(NSString *)title;
-(NSString *)artist;
-(unsigned long long)trackId;
-(unsigned long long)songId;
-(id)initWithTrackId:(unsigned long long)arg1 songId:(unsigned long long)arg2 title:(id)arg3 artist:(id)arg4 ;
@end

