/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, HAP2TLVParamServiceList, NSString;

@interface HAP2TLVParamAccessorySignature : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _accessoryID;
	HAP2TLVParamServiceList* _serviceList;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * accessoryID;              //@synthesize accessoryID=_accessoryID - In the implementation block
@property (nonatomic,retain) HAP2TLVParamServiceList * serviceList;                //@synthesize serviceList=_serviceList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(HAPTLVUnsignedNumberValue *)accessoryID;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccessoryID:(HAPTLVUnsignedNumberValue *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HAP2TLVParamServiceList *)serviceList;
-(id)initWithAccessoryID:(id)arg1 serviceList:(id)arg2 ;
-(void)setServiceList:(HAP2TLVParamServiceList *)arg1 ;
@end

