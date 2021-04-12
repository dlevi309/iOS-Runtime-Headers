/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoSetTransactionDefaultsRequest : PBRequest <NSCopying> {

	NSData* _defaultBillingAddresses;
	NSData* _defaultContactEmail;
	NSData* _defaultContactName;
	NSData* _defaultContactPhone;
	NSData* _defaultShippingAddress;

}

@property (nonatomic,readonly) BOOL hasDefaultShippingAddress; 
@property (nonatomic,retain) NSData * defaultShippingAddress;                //@synthesize defaultShippingAddress=_defaultShippingAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultBillingAddresses; 
@property (nonatomic,retain) NSData * defaultBillingAddresses;               //@synthesize defaultBillingAddresses=_defaultBillingAddresses - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultContactEmail; 
@property (nonatomic,retain) NSData * defaultContactEmail;                   //@synthesize defaultContactEmail=_defaultContactEmail - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultContactPhone; 
@property (nonatomic,retain) NSData * defaultContactPhone;                   //@synthesize defaultContactPhone=_defaultContactPhone - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultContactName; 
@property (nonatomic,retain) NSData * defaultContactName;                    //@synthesize defaultContactName=_defaultContactName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)defaultContactName;
-(void)setDefaultContactName:(NSData *)arg1 ;
-(NSData *)defaultBillingAddresses;
-(NSData *)defaultContactEmail;
-(void)setDefaultContactEmail:(NSData *)arg1 ;
-(NSData *)defaultContactPhone;
-(void)setDefaultContactPhone:(NSData *)arg1 ;
-(NSData *)defaultShippingAddress;
-(void)setDefaultShippingAddress:(NSData *)arg1 ;
-(void)setDefaultBillingAddresses:(NSData *)arg1 ;
-(BOOL)hasDefaultShippingAddress;
-(BOOL)hasDefaultBillingAddresses;
-(BOOL)hasDefaultContactEmail;
-(BOOL)hasDefaultContactPhone;
-(BOOL)hasDefaultContactName;
@end

