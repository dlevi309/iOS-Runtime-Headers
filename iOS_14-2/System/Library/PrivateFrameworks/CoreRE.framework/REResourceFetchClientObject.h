/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/

#import <CoreRE/CoreRE-Structs.h>
#import <libobjc.A.dylib/REResourceFetchService.h>

@class NSString;

@interface REResourceFetchClientObject : NSObject <REResourceFetchService> {

	int _pid;
	int _pidversion;
	ResourceFetchManager* _resourceFetchManager;

}

@property (nonatomic,readonly) ResourceFetchManager* resourceFetchManager;              //@synthesize resourceFetchManager=_resourceFetchManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * redactedDescription; 
@property (nonatomic,readonly) int pid;                                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) int pidversion;                                          //@synthesize pidversion=_pidversion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)pid;
-(NSString *)description;
-(void)invalidate;
-(NSString *)redactedDescription;
-(void)associateConnectionWithPeerID:(unsigned long long)arg1 ;
-(id)initWithResourceFetchManager:(ResourceFetchManager*)arg1 connection:(const Connection*)arg2 ;
-(ResourceFetchManager*)resourceFetchManager;
-(int)pidversion;
@end

