/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class HAPRelayRequestMessage, NSData;

@interface HAPRelayResponseMessage : HMFObject {

	HAPRelayRequestMessage* _request;
	unsigned long long _type;
	long long _statusCode;
	NSData* _body;

}

@property (nonatomic,readonly) HAPRelayRequestMessage * request;               //@synthesize request=_request - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (nonatomic,readonly) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long statusCode;                           //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSData * body;                                    //@synthesize body=_body - In the implementation block
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(id)shortDescription;
-(id)debugDescription;
-(HAPRelayRequestMessage *)request;
-(long long)statusCode;
-(id)description;
-(BOOL)isEncrypted;
-(unsigned long long)type;
-(BOOL)_deserializeResponseMessage:(id)arg1 ;
-(id)initWithRequest:(id)arg1 serializedMessage:(id)arg2 ;
@end

