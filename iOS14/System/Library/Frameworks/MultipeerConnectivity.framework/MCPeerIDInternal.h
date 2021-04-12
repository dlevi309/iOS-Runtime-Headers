/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)pid64;
-(NSString *)idString;
-(NSString *)displayName;
-(void)dealloc;
-(id)initWithIDString:(id)arg1 pid64:(unsigned long long)arg2 displayName:(id)arg3 ;
@end

