/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libBasebandManager.dylib
*/

#import <libBasebandManager.dylib/libBasebandManager.dylib-Structs.h>
#import <libobjc.A.dylib/ACCConnectionInfoDelegateProtocol.h>

@class ACCConnectionInfo, NSMutableDictionary, NSString;

@interface AccessoryDetection : NSObject <ACCConnectionInfoDelegateProtocol> {

	ACCConnectionInfo* _fConnectionInfoProvider;
	NSMutableDictionary* _fAccessoryEndpointList;
	NSMutableDictionary* _fConnectionInfoFilter;
	AccessoryDetectionCallback _fCallback;

}

@property (retain) ACCConnectionInfo * fConnectionInfoProvider;               //@synthesize fConnectionInfoProvider=_fConnectionInfoProvider - In the implementation block
@property (assign) AccessoryDetectionCallback fCallback;                      //@synthesize fCallback=_fCallback - In the implementation block
@property (retain) NSMutableDictionary * fAccessoryEndpointList;              //@synthesize fAccessoryEndpointList=_fAccessoryEndpointList - In the implementation block
@property (retain) NSMutableDictionary * fConnectionInfoFilter;               //@synthesize fConnectionInfoFilter=_fConnectionInfoFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCallback:(AccessoryDetectionCallback)arg1 ;
-(void)start;
-(void)stop;
-(void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(id)arg4 forConnection:(id)arg5 ;
-(void)accessoryEndpointDetached:(id)arg1 forConnection:(id)arg2 ;
-(ACCConnectionInfo *)fConnectionInfoProvider;
-(void)setFConnectionInfoProvider:(ACCConnectionInfo *)arg1 ;
-(AccessoryDetectionCallback)fCallback;
-(void)setFCallback:(AccessoryDetectionCallback)arg1 ;
-(NSMutableDictionary *)fAccessoryEndpointList;
-(void)setFAccessoryEndpointList:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)fConnectionInfoFilter;
-(void)setFConnectionInfoFilter:(NSMutableDictionary *)arg1 ;
@end

