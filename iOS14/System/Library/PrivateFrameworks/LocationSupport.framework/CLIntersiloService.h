/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <libobjc.A.dylib/CLIntersiloServiceProtocol.h>
#import <libobjc.A.dylib/CLIntersiloUniverse.h>

@class CLSilo, CLServiceVendor, NSString;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol, CLIntersiloUniverse> {

	CLSilo* _silo;
	CLServiceVendor* _vendor;
	BOOL _valid;

}

@property (nonatomic,readonly) id<CLIntersiloUniverse> universe; 
@property (assign,nonatomic) BOOL valid;                                      //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLSilo * silo;                                 //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLServiceVendor * vendor;                      //@synthesize vendor=_vendor - In the implementation block
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(id)getSilo;
-(void)setValid:(BOOL)arg1 ;
-(id)init;
-(NSString *)debugDescription;
-(id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 ;
-(CLServiceVendor *)vendor;
-(BOOL)valid;
-(void)setVendor:(CLServiceVendor *)arg1 ;
-(CLSilo *)silo;
-(id<CLIntersiloUniverse>)universe;
-(void)setSilo:(CLSilo *)arg1 ;
@end

