/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSSet;

@interface NPKPeerPaymentQuickTypeParser : NSObject {

	NSSet* _supportedCurrencyCodes;
	NSSet* _allowedPayloadIDs;

}

@property (nonatomic,readonly) NSSet * supportedCurrencyCodes;              //@synthesize supportedCurrencyCodes=_supportedCurrencyCodes - In the implementation block
@property (nonatomic,readonly) NSSet * allowedPayloadIDs;                   //@synthesize allowedPayloadIDs=_allowedPayloadIDs - In the implementation block
-(id)parsePayload:(id)arg1 payloadID:(id)arg2 maxCount:(unsigned long long)arg3 ;
-(NSSet *)allowedPayloadIDs;
-(NSSet *)supportedCurrencyCodes;
-(id)initWithSupportedCurrencyCodes:(id)arg1 allowedPayloadIDs:(id)arg2 ;
-(id)parsePayload:(id)arg1 payloadID:(id)arg2 ;
@end

