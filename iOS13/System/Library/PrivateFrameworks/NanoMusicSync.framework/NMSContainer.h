/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSString, NSNumber;

@interface NMSContainer : NSObject {

	NSString* _name;
	NSNumber* _persistentID;
	unsigned long long _type;
	NSNumber* _addedDate;
	NSNumber* _playedDate;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSNumber * addedDate;                   //@synthesize addedDate=_addedDate - In the implementation block
@property (nonatomic,retain) NSNumber * playedDate;                  //@synthesize playedDate=_playedDate - In the implementation block
-(NSString *)name;
-(unsigned long long)type;
-(NSNumber *)persistentID;
-(NSNumber *)addedDate;
-(void)setAddedDate:(NSNumber *)arg1 ;
-(id)initWithPersistentID:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 ;
-(NSNumber *)playedDate;
-(void)setPlayedDate:(NSNumber *)arg1 ;
@end

