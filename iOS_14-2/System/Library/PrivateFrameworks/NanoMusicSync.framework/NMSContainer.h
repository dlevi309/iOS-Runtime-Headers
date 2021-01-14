/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAddedDate:(NSNumber *)arg1 ;
-(NSNumber *)persistentID;
-(unsigned long long)type;
-(NSNumber *)addedDate;
-(id)initWithPersistentID:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 ;
-(NSNumber *)playedDate;
-(void)setPlayedDate:(NSNumber *)arg1 ;
@end

