/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RBSAssertionIdentifier : NSObject <BSXPCSecureCoding, NSCopying> {

	NSString* _desc;
	unsigned long long _hash;
	int _serverPid;
	int _clientPid;
	unsigned long long _count;

}

@property (nonatomic,readonly) int serverPid;                         //@synthesize serverPid=_serverPid - In the implementation block
@property (nonatomic,readonly) int clientPid;                         //@synthesize clientPid=_clientPid - In the implementation block
@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_next;
+(BOOL)supportsBSXPCSecureCoding;
+(id)identifierWithClientPid:(int)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(int)clientPid;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithServerPid:(int)arg1 clientPid:(int)arg2 count:(unsigned long long)arg3 ;
-(int)serverPid;
@end

