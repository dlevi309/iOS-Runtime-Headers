/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)uuid;
-(int)pid;
-(NSString *)bundleName;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(unsigned)state;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setPid:(int)arg1 ;
-(NSString *)displayName;
-(void)setBundleName:(NSString *)arg1 ;
@end

