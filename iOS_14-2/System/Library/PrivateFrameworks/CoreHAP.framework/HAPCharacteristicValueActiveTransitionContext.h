/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, NSData, NSString;

@interface HAPCharacteristicValueActiveTransitionContext : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _HAPInstanceID;
	NSData* _controllerContext;
	HAPTLVUnsignedNumberValue* _timeElapsedSinceStart;

}

@property (getter=isValid,readonly) BOOL valid; 
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * HAPInstanceID;                      //@synthesize HAPInstanceID=_HAPInstanceID - In the implementation block
@property (nonatomic,retain) NSData * controllerContext;                                     //@synthesize controllerContext=_controllerContext - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * timeElapsedSinceStart;              //@synthesize timeElapsedSinceStart=_timeElapsedSinceStart - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isValid;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSData *)controllerContext;
-(HAPTLVUnsignedNumberValue *)HAPInstanceID;
-(HAPTLVUnsignedNumberValue *)timeElapsedSinceStart;
-(void)setHAPInstanceID:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setControllerContext:(NSData *)arg1 ;
-(void)setTimeElapsedSinceStart:(HAPTLVUnsignedNumberValue *)arg1 ;
-(id)initWithHAPInstanceID:(id)arg1 controllerContext:(id)arg2 timeElapsedSinceStart:(id)arg3 ;
@end

