/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/SoftwareUpdateCoreConnect
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SUCoreConnectClientProxyProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface SUCoreConnectClientProxy : NSObject <NSSecureCoding, SUCoreConnectClientProxyProtocol> {

	NSString* _clientID;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _progressBlock;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,readonly) id progressBlock;                                                 //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,retain,readonly) NSString * clientID;                                       //@synthesize clientID=_clientID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)clientID;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)summary;
-(id)progressBlock;
-(id)initWithCoder:(id)arg1 ;
-(void)executeProgressBlock:(id)arg1 ;
-(id)initWithClientID:(id)arg1 completionQueue:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

