/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAP2TLVThreadOperationTypeWrapper, HAP2TLVThreadNetworkCredentials, HAPTLVUnsignedNumberValue, NSString;

@interface HAP2TLVThreadControl : NSObject <NSCopying, HAPTLVProtocol> {

	HAP2TLVThreadOperationTypeWrapper* _operationType;
	HAP2TLVThreadNetworkCredentials* _threadNetworkCredentials;
	HAPTLVUnsignedNumberValue* _formingAllowed;

}

@property (nonatomic,retain) HAP2TLVThreadOperationTypeWrapper * operationType;                       //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,retain) HAP2TLVThreadNetworkCredentials * threadNetworkCredentials;              //@synthesize threadNetworkCredentials=_threadNetworkCredentials - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * formingAllowed;                              //@synthesize formingAllowed=_formingAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(HAP2TLVThreadOperationTypeWrapper *)operationType;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setOperationType:(HAP2TLVThreadOperationTypeWrapper *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithOperationType:(id)arg1 threadNetworkCredentials:(id)arg2 formingAllowed:(id)arg3 ;
-(void)setThreadNetworkCredentials:(HAP2TLVThreadNetworkCredentials *)arg1 ;
-(void)setFormingAllowed:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAP2TLVThreadNetworkCredentials *)threadNetworkCredentials;
-(HAPTLVUnsignedNumberValue *)formingAllowed;
@end

