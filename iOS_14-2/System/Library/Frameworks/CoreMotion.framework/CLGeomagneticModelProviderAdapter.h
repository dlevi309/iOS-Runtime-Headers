/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <libobjc.A.dylib/CLGeomagneticModelProviderProtocol.h>

@class NSString;

@interface CLGeomagneticModelProviderAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderProtocol>

@property (assign,nonatomic) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(id)getSilo;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(id)init;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)fetchGeomagneticModelData:(/*^block*/id)arg1 ;
-(void)beginService;
-(void)doAsync:(/*^block*/id)arg1 ;
-(CLGeomagneticModelProvider*)adaptee;
-(void)endService;
@end

