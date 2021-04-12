/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NFTag, NSData;

@interface PKNFCTag : NSObject {

	NFTag* _underlyingTag;
	unsigned long long _technology;
	NSData* _tagIdentifier;
	NSData* _manufacturerIdentifier;
	NSData* _manufacturerParameter;
	NSData* _systemCode;
	NSData* _UID;

}

@property (assign,nonatomic) unsigned long long technology;              //@synthesize technology=_technology - In the implementation block
@property (nonatomic,copy) NSData * tagIdentifier;                       //@synthesize tagIdentifier=_tagIdentifier - In the implementation block
@property (nonatomic,copy) NSData * manufacturerIdentifier;              //@synthesize manufacturerIdentifier=_manufacturerIdentifier - In the implementation block
@property (nonatomic,copy) NSData * manufacturerParameter;               //@synthesize manufacturerParameter=_manufacturerParameter - In the implementation block
@property (nonatomic,copy) NSData * systemCode;                          //@synthesize systemCode=_systemCode - In the implementation block
@property (nonatomic,copy) NSData * UID;                                 //@synthesize UID=_UID - In the implementation block
-(NSData *)UID;
-(void)setUID:(NSData *)arg1 ;
-(unsigned long long)technology;
-(id)initWithNFTag:(id)arg1 ;
-(void)setTechnology:(unsigned long long)arg1 ;
-(NSData *)tagIdentifier;
-(void)setTagIdentifier:(NSData *)arg1 ;
-(NSData *)manufacturerIdentifier;
-(void)setManufacturerIdentifier:(NSData *)arg1 ;
-(NSData *)manufacturerParameter;
-(void)setManufacturerParameter:(NSData *)arg1 ;
-(void)setSystemCode:(NSData *)arg1 ;
-(NSData *)systemCode;
@end

