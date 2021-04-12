/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


@class NSString;

@interface STMSizeCacheEvent : NSObject {

	unsigned _flags;
	NSString* _path;
	unsigned long long _evtID;

}

@property (retain) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (assign) unsigned long long evtID;              //@synthesize evtID=_evtID - In the implementation block
@property (assign) unsigned flags;                        //@synthesize flags=_flags - In the implementation block
+(id)eventWithPath:(id)arg1 flags:(unsigned)arg2 event:(unsigned long long)arg3 ;
-(unsigned)flags;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned long long)evtID;
-(void)setEvtID:(unsigned long long)arg1 ;
@end

