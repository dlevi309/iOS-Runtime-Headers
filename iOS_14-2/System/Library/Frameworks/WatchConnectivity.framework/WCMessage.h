/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface WCMessage : NSObject <NSSecureCoding> {

	BOOL _dictionaryMessage;
	NSString* _pairingID;
	NSString* _identifier;
	NSData* _data;

}

@property (copy,readonly) NSString * pairingID;                                      //@synthesize pairingID=_pairingID - In the implementation block
@property (copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSData * data;                                             //@synthesize data=_data - In the implementation block
@property (getter=isDictionaryMessage,readonly) BOOL dictionaryMessage;              //@synthesize dictionaryMessage=_dictionaryMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)pairingID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(BOOL)arg4 ;
-(BOOL)isDictionaryMessage;
@end

