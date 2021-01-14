/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSData, NSDictionary;

@interface NPKPassSyncStateItem : NSObject <NSSecureCoding> {

	NSString* _passTypeIdentifier;
	NSString* _serialNumber;
	NSNumber* _sequenceCounter;
	NSData* _manifestHash;
	NSDictionary* _manifest;

}

@property (nonatomic,retain) NSString * passTypeIdentifier;              //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                    //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,retain) NSNumber * sequenceCounter;                 //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,retain) NSData * manifestHash;                      //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,retain) NSDictionary * manifest;                    //@synthesize manifest=_manifest - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)serialNumber;
-(NSString *)uniqueID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)description;
-(NSNumber *)sequenceCounter;
-(NSDictionary *)manifest;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(void)setManifest:(NSDictionary *)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setSequenceCounter:(NSNumber *)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)manifestHash;
-(id)initWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 sequenceCounter:(id)arg3 manifestHash:(id)arg4 manifest:(id)arg5 ;
-(id)initWithProtoSyncStateItem:(id)arg1 ;
-(id)protoSyncStateItem;
-(BOOL)isEqualToPassSyncStateItem:(id)arg1 ;
@end

