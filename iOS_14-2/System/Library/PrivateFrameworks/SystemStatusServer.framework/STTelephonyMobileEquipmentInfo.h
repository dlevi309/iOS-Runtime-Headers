/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <SystemStatusServer/SystemStatusServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface STTelephonyMobileEquipmentInfo : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {

	NSString* _MEID;
	NSString* _IMEI;
	NSString* _ICCID;
	NSString* _CSN;
	NSString* _bootstrapICCID;

}

@property (nonatomic,copy,readonly) NSString * MEID;                               //@synthesize MEID=_MEID - In the implementation block
@property (nonatomic,copy,readonly) NSString * IMEI;                               //@synthesize IMEI=_IMEI - In the implementation block
@property (nonatomic,copy,readonly) NSString * ICCID;                              //@synthesize ICCID=_ICCID - In the implementation block
@property (nonatomic,copy,readonly) NSString * CSN;                                //@synthesize CSN=_CSN - In the implementation block
@property (nonatomic,copy,readonly) NSString * bootstrapICCID;                     //@synthesize bootstrapICCID=_bootstrapICCID - In the implementation block
@property (getter=isOnBootstrap,nonatomic,readonly) BOOL onBootstrap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)init;
-(NSString *)MEID;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)ICCID;
-(NSString *)description;
-(NSString *)CSN;
-(NSString *)IMEI;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isOnBootstrap;
-(id)initWithMobileEquipmentInfo:(id)arg1 ;
-(NSString *)bootstrapICCID;
@end

