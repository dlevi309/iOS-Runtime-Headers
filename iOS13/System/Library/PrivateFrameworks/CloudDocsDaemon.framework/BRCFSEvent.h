/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)flags;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned long long)eventID;
-(id)initWithPath:(id)arg1 flags:(unsigned)arg2 eventID:(unsigned long long)arg3 ;
@end

