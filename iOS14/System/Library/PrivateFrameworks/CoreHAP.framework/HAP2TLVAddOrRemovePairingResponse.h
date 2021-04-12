/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAP2TLVPairingStateWrapper, HAP2TLVErrorsWrapper, NSString;

@interface HAP2TLVAddOrRemovePairingResponse : NSObject <NSCopying, HAPTLVProtocol> {

	HAP2TLVPairingStateWrapper* _state;
	HAP2TLVErrorsWrapper* _responseError;

}

@property (nonatomic,retain) HAP2TLVPairingStateWrapper * state;                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HAP2TLVErrorsWrapper * responseError;              //@synthesize responseError=_responseError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(HAP2TLVErrorsWrapper *)responseError;
-(void)setResponseError:(HAP2TLVErrorsWrapper *)arg1 ;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setState:(HAP2TLVPairingStateWrapper *)arg1 ;
-(HAP2TLVPairingStateWrapper *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithState:(id)arg1 responseError:(id)arg2 ;
@end

