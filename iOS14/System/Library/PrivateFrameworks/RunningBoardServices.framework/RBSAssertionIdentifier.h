/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RBSAssertionIdentifier : NSObject <RBSXPCSecureCoding, NSCopying> {

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
+(BOOL)supportsRBSXPCSecureCoding;
+(id)identifierWithClientPid:(int)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(int)serverPid;
-(NSString *)description;
-(int)clientPid;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

