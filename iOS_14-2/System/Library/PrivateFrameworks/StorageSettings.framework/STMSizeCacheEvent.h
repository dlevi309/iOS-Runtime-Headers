/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(unsigned long long)evtID;
-(void)setFlags:(unsigned)arg1 ;
-(void)setEvtID:(unsigned long long)arg1 ;
@end

