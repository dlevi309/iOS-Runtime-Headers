/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class NSData, HMDWakeConfigurationParamaters, NSString;

@interface HMDWakeConfiguration : NSObject <NSCopying, HMDTLVProtocol> {

	NSData* _reserved;
	HMDWakeConfigurationParamaters* _custom1;
	HMDWakeConfigurationParamaters* _custom2;

}

@property (nonatomic,retain) NSData * reserved;                                     //@synthesize reserved=_reserved - In the implementation block
@property (nonatomic,retain) HMDWakeConfigurationParamaters * custom1;              //@synthesize custom1=_custom1 - In the implementation block
@property (nonatomic,retain) HMDWakeConfigurationParamaters * custom2;              //@synthesize custom2=_custom2 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)reserved;
-(void)setReserved:(NSData *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setCustom1:(HMDWakeConfigurationParamaters *)arg1 ;
-(void)setCustom2:(HMDWakeConfigurationParamaters *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HMDWakeConfigurationParamaters *)custom1;
-(HMDWakeConfigurationParamaters *)custom2;
-(id)initWithReserved:(id)arg1 custom1:(id)arg2 custom2:(id)arg3 ;
@end

