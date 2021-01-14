/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)defaultContactName;
-(void)setDefaultContactName:(NSData *)arg1 ;
-(id)description;
-(NSData *)defaultContactEmail;
-(NSData *)defaultBillingAddresses;
-(void)setDefaultContactEmail:(NSData *)arg1 ;
-(NSData *)defaultContactPhone;
-(void)setDefaultContactPhone:(NSData *)arg1 ;
-(NSData *)defaultShippingAddress;
-(void)setDefaultShippingAddress:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDefaultBillingAddresses:(NSData *)arg1 ;
-(BOOL)hasDefaultShippingAddress;
-(BOOL)hasDefaultBillingAddresses;
-(BOOL)hasDefaultContactEmail;
-(BOOL)hasDefaultContactPhone;
-(BOOL)hasDefaultContactName;
@end

