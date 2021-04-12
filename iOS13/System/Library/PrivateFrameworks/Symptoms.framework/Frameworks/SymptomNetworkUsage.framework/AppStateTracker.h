/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/


@class NSString, NSUUID;

@interface AppStateTracker : NSObject {

	int _pid;
	unsigned _state;
	NSString* _displayName;
	NSString* _bundleName;
	NSUUID* _uuid;

}

@property (retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * bundleName;               //@synthesize bundleName=_bundleName - In the implementation block
@property (retain) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
@property (assign) int pid;                             //@synthesize pid=_pid - In the implementation block
@property (assign) unsigned state;                      //@synthesize state=_state - In the implementation block
-(id)description;
-(unsigned)state;
-(NSUUID *)uuid;
-(NSString *)displayName;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)bundleName;
-(void)setState:(unsigned)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setBundleName:(NSString *)arg1 ;
@end

