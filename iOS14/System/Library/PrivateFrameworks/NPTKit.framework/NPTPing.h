/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
*/

#import <NPTKit/NPTKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SimplePingDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_activity;
@class SimplePing, NSMutableArray, NSObject, NPTPingResult, NSString;

@interface NPTPing : NSObject <NSSecureCoding, SimplePingDelegate, NSCopying> {

	SimplePing* pinger;
	unsigned long long pingCount;
	NSMutableArray* pings;
	NSObject*<OS_nw_activity> activityParent;
	NSObject*<OS_nw_activity> pingActivity;
	id _delegate;
	NPTPingResult* _results;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NPTPingResult * results;               //@synthesize results=_results - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setResults:(NPTPingResult *)arg1 ;
-(NPTPingResult *)results;
-(void)setCompletion:(id)arg1 ;
-(id)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)completion;
-(void)stop;
-(void)setDelegate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)cancel;
-(void)sendPing;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithNetworkActivityParent:(id)arg1 ;
-(id)initWithNetworkActivityParent:(id)arg1 pingTarget:(id)arg2 ;
-(void)startWithNumberOfPings:(unsigned long long)arg1 forcingIPv4:(BOOL)arg2 forcingIPv6:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)simplePing:(id)arg1 didStartWithAddress:(id)arg2 ;
-(void)simplePing:(id)arg1 didFailWithError:(id)arg2 ;
-(void)simplePing:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 ;
-(void)simplePing:(id)arg1 didTimeOut:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4 ;
-(void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4 ;
-(void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3 ;
-(void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2 ;
-(void)startWithNumberOfPings:(unsigned long long)arg1 forcingIPv4:(BOOL)arg2 forcingIPv6:(BOOL)arg3 ;
@end

