/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_workloop;
@class NRPairedDeviceRegistry, IDSService, NSObject;

@interface SCLSchoolModeManagerConfiguration : NSObject <NSCopying> {

	BOOL _managesSchoolTimeSession;
	BOOL _allowsNonTinkerPairing;
	NRPairedDeviceRegistry* _deviceRegistry;
	IDSService* _service;
	NSObject*<OS_dispatch_workloop> _workloop;

}

@property (nonatomic,retain) NRPairedDeviceRegistry * deviceRegistry;               //@synthesize deviceRegistry=_deviceRegistry - In the implementation block
@property (nonatomic,retain) IDSService * service;                                  //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL managesSchoolTimeSession;                         //@synthesize managesSchoolTimeSession=_managesSchoolTimeSession - In the implementation block
@property (assign,nonatomic) BOOL allowsNonTinkerPairing;                           //@synthesize allowsNonTinkerPairing=_allowsNonTinkerPairing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_workloop> workloop;              //@synthesize workloop=_workloop - In the implementation block
-(NRPairedDeviceRegistry *)deviceRegistry;
-(void)setWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(void)setService:(IDSService *)arg1 ;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceRegistry:(NRPairedDeviceRegistry *)arg1 ;
-(IDSService *)service;
-(void)setManagesSchoolTimeSession:(BOOL)arg1 ;
-(void)setAllowsNonTinkerPairing:(BOOL)arg1 ;
-(BOOL)managesSchoolTimeSession;
-(BOOL)allowsNonTinkerPairing;
@end

