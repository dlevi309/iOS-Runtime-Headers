/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)debugDescription;
-(unsigned long long)type;
-(long long)statusCode;
-(HAPRelayRequestMessage *)request;
-(BOOL)isEncrypted;
-(id)shortDescription;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(BOOL)_deserializeResponseMessage:(id)arg1 ;
-(id)initWithRequest:(id)arg1 serializedMessage:(id)arg2 ;
@end

