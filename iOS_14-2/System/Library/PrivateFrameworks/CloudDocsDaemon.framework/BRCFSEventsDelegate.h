/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol BRCFSEventsDelegate <NSObject>
@required
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(id)arg4;
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2;
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2 unresolvedLastPathComponent:(id)arg3;
-(void)fseventRecursiveAtRoot:(id)arg1 withReason:(id)arg2;

@end

