/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HAPCharacteristicValueTransitionState : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _activeTransitionContexts;

}

@property (getter=isValid,readonly) BOOL valid; 
@property (nonatomic,retain) NSMutableArray * activeTransitionContexts;              //@synthesize activeTransitionContexts=_activeTransitionContexts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isValid;
-(BOOL)isNaturalLightingEnabledForCharacteristic:(id)arg1 ;
-(id)naturalLightingActiveTransitionContextForCharacteristic:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSMutableArray *)activeTransitionContexts;
-(void)setActiveTransitionContexts:(NSMutableArray *)arg1 ;
-(id)initWithActiveTransitionContexts:(id)arg1 ;
@end

