/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSString;

@interface IMDMessagePTask : NSObject {

	NSString* _guid;
	unsigned long long _taskFlags;

}

@property (nonatomic,readonly) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) unsigned long long taskFlags;              //@synthesize taskFlags=_taskFlags - In the implementation block
-(void)dealloc;
-(NSString *)guid;
-(BOOL)needsProccesingFor:(unsigned long long)arg1 ;
-(void)compeletedTask:(unsigned long long)arg1 ;
-(id)initWithGUID:(id)arg1 ;
-(void)setTaskFlag:(unsigned long long)arg1 ;
-(id)initWithStoreDictionary:(id)arg1 ;
-(unsigned long long)taskFlags;
@end

