/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)getSilo;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(NSString *)debugDescription;
-(CLSilo *)silo;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(CLServiceVendor *)vendor;
-(void)setVendor:(CLServiceVendor *)arg1 ;
-(id<CLIntersiloUniverse>)universe;
-(id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 ;
-(void)setSilo:(CLSilo *)arg1 ;
@end

