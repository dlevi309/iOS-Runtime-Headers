/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, DIClient2IODaemonXPCHandler, NSXPCListenerEndpoint;

@interface DIDeviceHandle : NSObject <NSSecureCoding, NSCoding> {

	BOOL _handleRefCount;
	unsigned _ioMedia;
	NSString* _BSDName;
	DIClient2IODaemonXPCHandler* _client2IOhandler;
	unsigned long long _regEntryID;
	NSXPCListenerEndpoint* _xpcEndpoint;

}

@property (assign,nonatomic) unsigned ioMedia;                                            //@synthesize ioMedia=_ioMedia - In the implementation block
@property (nonatomic,retain) DIClient2IODaemonXPCHandler * client2IOhandler;              //@synthesize client2IOhandler=_client2IOhandler - In the implementation block
@property (assign,nonatomic) BOOL handleRefCount;                                         //@synthesize handleRefCount=_handleRefCount - In the implementation block
@property (nonatomic,readonly) unsigned long long regEntryID;                             //@synthesize regEntryID=_regEntryID - In the implementation block
@property (nonatomic,retain) NSString * BSDName;                                          //@synthesize BSDName=_BSDName - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * xpcEndpoint;                         //@synthesize xpcEndpoint=_xpcEndpoint - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned)copyIOMediaWithService:(unsigned)arg1 error:(id*)arg2 ;
+(id)copyBSDNameWithService:(unsigned)arg1 error:(id*)arg2 ;
-(NSString *)BSDName;
-(unsigned)ioMedia;
-(void)setIoMedia:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSXPCListenerEndpoint *)xpcEndpoint;
-(void)setXpcEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)dealloc;
-(void)setHandleRefCount:(BOOL)arg1 ;
-(id)initWithRegEntryID:(unsigned long long)arg1 xpcEndpoint:(id)arg2 ;
-(DIClient2IODaemonXPCHandler *)client2IOhandler;
-(unsigned long long)regEntryID;
-(unsigned)copyKernelServiceWithError:(id*)arg1 ;
-(void)setBSDName:(NSString *)arg1 ;
-(void)waitForQuietWithService:(unsigned)arg1 ;
-(BOOL)updateBSDNameWithError:(id*)arg1 ;
-(BOOL)addToRefCountWithError:(id*)arg1 ;
-(BOOL)handleRefCount;
-(void)setClient2IOhandler:(DIClient2IODaemonXPCHandler *)arg1 ;
-(id)initWithRegEntryID:(unsigned long long)arg1 ;
-(BOOL)waitForDeviceWithError:(id*)arg1 ;
@end

