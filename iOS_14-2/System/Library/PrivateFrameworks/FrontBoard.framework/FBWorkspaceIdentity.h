/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBWorkspaceIdentity : NSObject <NSCopying> {

	int _pid;

}

@property (nonatomic,readonly) int pid;              //@synthesize pid=_pid - In the implementation block
+(id)identityWithPid:(int)arg1 ;
-(int)pid;
-(id)_initWithPid:(int)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

