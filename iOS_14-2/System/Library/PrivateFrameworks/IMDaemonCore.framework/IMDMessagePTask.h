/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSString;

@interface IMDMessagePTask : NSObject {

	NSString* _guid;
	unsigned long long _taskFlags;

}

@property (nonatomic,readonly) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) unsigned long long taskFlags;              //@synthesize taskFlags=_taskFlags - In the implementation block
-(NSString *)guid;
-(void)dealloc;
-(id)initWithGUID:(id)arg1 ;
-(BOOL)needsProccesingFor:(unsigned long long)arg1 ;
-(void)compeletedTask:(unsigned long long)arg1 ;
-(void)setTaskFlag:(unsigned long long)arg1 ;
-(id)initWithStoreDictionary:(id)arg1 ;
-(unsigned long long)taskFlags;
@end

