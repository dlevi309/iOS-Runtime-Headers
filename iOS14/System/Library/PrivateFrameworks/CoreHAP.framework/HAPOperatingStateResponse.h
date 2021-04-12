/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPOperatingStateWrapper, HAPOperatingStateAbnormalReasonsWrapper, NSString;

@interface HAPOperatingStateResponse : NSObject <NSCopying, HAPTLVProtocol> {

	HAPOperatingStateWrapper* _state;
	HAPOperatingStateAbnormalReasonsWrapper* _abnormalReasons;

}

@property (nonatomic,retain) HAPOperatingStateWrapper * state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HAPOperatingStateAbnormalReasonsWrapper * abnormalReasons;              //@synthesize abnormalReasons=_abnormalReasons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setState:(HAPOperatingStateWrapper *)arg1 ;
-(HAPOperatingStateWrapper *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HAPOperatingStateAbnormalReasonsWrapper *)abnormalReasons;
-(void)setAbnormalReasons:(HAPOperatingStateAbnormalReasonsWrapper *)arg1 ;
-(id)initWithState:(id)arg1 abnormalReasons:(id)arg2 ;
@end

