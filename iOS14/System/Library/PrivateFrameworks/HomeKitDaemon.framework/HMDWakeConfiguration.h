/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, HMDWakeConfigurationParameters, NSString;

@interface HMDWakeConfiguration : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _reserved;
	HMDWakeConfigurationParameters* _custom1;
	HMDWakeConfigurationParameters* _custom2;

}

@property (nonatomic,retain) NSData * reserved;                                     //@synthesize reserved=_reserved - In the implementation block
@property (nonatomic,retain) HMDWakeConfigurationParameters * custom1;              //@synthesize custom1=_custom1 - In the implementation block
@property (nonatomic,retain) HMDWakeConfigurationParameters * custom2;              //@synthesize custom2=_custom2 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSData *)reserved;
-(NSString *)description;
-(void)setReserved:(NSData *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(HMDWakeConfigurationParameters *)custom1;
-(HMDWakeConfigurationParameters *)custom2;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setCustom1:(HMDWakeConfigurationParameters *)arg1 ;
-(void)setCustom2:(HMDWakeConfigurationParameters *)arg1 ;
-(id)initWithReserved:(id)arg1 custom1:(id)arg2 custom2:(id)arg3 ;
@end

