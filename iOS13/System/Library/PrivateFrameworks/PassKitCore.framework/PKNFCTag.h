/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSData* _appData;
	NSData* _UID;

}

@property (assign,nonatomic) unsigned long long technology;              //@synthesize technology=_technology - In the implementation block
@property (nonatomic,copy) NSData * tagIdentifier;                       //@synthesize tagIdentifier=_tagIdentifier - In the implementation block
@property (nonatomic,copy) NSData * manufacturerIdentifier;              //@synthesize manufacturerIdentifier=_manufacturerIdentifier - In the implementation block
@property (nonatomic,copy) NSData * manufacturerParameter;               //@synthesize manufacturerParameter=_manufacturerParameter - In the implementation block
@property (nonatomic,copy) NSData * systemCode;                          //@synthesize systemCode=_systemCode - In the implementation block
@property (nonatomic,copy) NSData * appData;                             //@synthesize appData=_appData - In the implementation block
@property (nonatomic,copy) NSData * UID;                                 //@synthesize UID=_UID - In the implementation block
-(void)setUID:(NSData *)arg1 ;
-(id)initWithNFTag:(id)arg1 ;
-(unsigned long long)technology;
-(NSData *)UID;
-(void)setTechnology:(unsigned long long)arg1 ;
-(NSData *)tagIdentifier;
-(void)setTagIdentifier:(NSData *)arg1 ;
-(NSData *)manufacturerIdentifier;
-(void)setManufacturerIdentifier:(NSData *)arg1 ;
-(NSData *)manufacturerParameter;
-(void)setManufacturerParameter:(NSData *)arg1 ;
-(NSData *)systemCode;
-(void)setSystemCode:(NSData *)arg1 ;
-(NSData *)appData;
-(void)setAppData:(NSData *)arg1 ;
@end

