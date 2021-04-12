/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/


@class NSString;

@interface MCPeerIDInternal : NSObject {

	NSString* _idString;
	unsigned long long _pid64;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSString * idString;                   //@synthesize idString=_idString - In the implementation block
@property (nonatomic,readonly) unsigned long long pid64;              //@synthesize pid64=_pid64 - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
-(void)dealloc;
-(NSString *)displayName;
-(NSString *)idString;
-(id)initWithIDString:(id)arg1 pid64:(unsigned long long)arg2 displayName:(id)arg3 ;
-(unsigned long long)pid64;
@end

