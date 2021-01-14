/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAP2TLVPairingStateWrapper, HAP2TLVPairingMethodWrapper, NSString;

@interface HAP2TLVRemovePairingRequest : NSObject <NSCopying, HAPTLVProtocol> {

	HAP2TLVPairingStateWrapper* _state;
	HAP2TLVPairingMethodWrapper* _method;
	NSString* _identifier;

}

@property (nonatomic,retain) HAP2TLVPairingStateWrapper * state;                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HAP2TLVPairingMethodWrapper * method;              //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(HAP2TLVPairingMethodWrapper *)method;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setState:(HAP2TLVPairingStateWrapper *)arg1 ;
-(HAP2TLVPairingStateWrapper *)state;
-(void)setMethod:(HAP2TLVPairingMethodWrapper *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithState:(id)arg1 method:(id)arg2 identifier:(id)arg3 ;
@end

