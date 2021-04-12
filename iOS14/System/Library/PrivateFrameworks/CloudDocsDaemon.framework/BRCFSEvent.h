/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSString;

@interface BRCFSEvent : NSObject {

	NSString* _path;
	unsigned _flags;
	unsigned long long _eventID;

}

@property (nonatomic,retain) NSString * path;                           //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) unsigned flags;                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned long long eventID;              //@synthesize eventID=_eventID - In the implementation block
-(unsigned long long)eventID;
-(unsigned)flags;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)setFlags:(unsigned)arg1 ;
-(id)initWithPath:(id)arg1 flags:(unsigned)arg2 eventID:(unsigned long long)arg3 ;
@end

