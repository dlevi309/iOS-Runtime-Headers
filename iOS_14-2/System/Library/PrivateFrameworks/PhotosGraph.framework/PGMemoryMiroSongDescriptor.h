/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)mood;
-(id)initWithMemory:(id)arg1 ;
-(NSSet *)genres;
-(NSString *)artistName;
-(id)description;
-(NSString *)songTitle;
-(id)songIdentifier;
-(long long)musicType;
-(NSDictionary *)diagnosticsDictionary;
@end

