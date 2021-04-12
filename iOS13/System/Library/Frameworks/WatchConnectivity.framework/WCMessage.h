/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(NSString *)pairingID;
-(id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(BOOL)arg4 ;
-(BOOL)isDictionaryMessage;
@end

