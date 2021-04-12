/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString, NSSet, NSDictionary;

@interface PGMemoryMiroSongDescriptor : NSObject {

	NSString* _songTitle;
	NSString* _artistName;
	id _songIdentifier;
	NSSet* _genres;
	unsigned long long _mood;
	long long _musicType;

}

@property (nonatomic,readonly) NSDictionary * diagnosticsDictionary; 
@property (nonatomic,readonly) NSString * songTitle;                              //@synthesize songTitle=_songTitle - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                             //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) id songIdentifier;                                 //@synthesize songIdentifier=_songIdentifier - In the implementation block
@property (nonatomic,readonly) long long musicType;                               //@synthesize musicType=_musicType - In the implementation block
@property (nonatomic,readonly) NSSet * genres;                                    //@synthesize genres=_genres - In the implementation block
@property (nonatomic,readonly) unsigned long long mood;                           //@synthesize mood=_mood - In the implementation block
-(id)description;
-(unsigned long long)mood;
-(id)initWithMemory:(id)arg1 ;
-(NSString *)artistName;
-(NSString *)songTitle;
-(NSSet *)genres;
-(id)songIdentifier;
-(long long)musicType;
-(NSDictionary *)diagnosticsDictionary;
@end

