/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
*/


@class NSString, NSData, NSDictionary;

@interface FirmwareBundle : NSObject {

	NSString* _bundleDescription;
	unsigned _productIDCode;
	unsigned _firmwareImageBaseAddress;
	unsigned _firmwareImageSize;
	NSData* _firmwareImage;
	NSDictionary* _buildManifest;
	NSData* _hash;
	NSData* _certificate;
	NSData* _signature;

}

@property (readonly) NSData * hash;                                     //@synthesize hash=_hash - In the implementation block
@property (readonly) NSData * firmwareImage;                            //@synthesize firmwareImage=_firmwareImage - In the implementation block
@property (readonly) NSData * signature;                                //@synthesize signature=_signature - In the implementation block
@property (readonly) NSData * certificate;                              //@synthesize certificate=_certificate - In the implementation block
@property (assign) unsigned productIDCode;                              //@synthesize productIDCode=_productIDCode - In the implementation block
@property (readonly) unsigned firmwareImageBaseAddress;                 //@synthesize firmwareImageBaseAddress=_firmwareImageBaseAddress - In the implementation block
@property (readonly) unsigned firmwareImageSize;                        //@synthesize firmwareImageSize=_firmwareImageSize - In the implementation block
@property (nonatomic,retain) NSDictionary * buildManifest;              //@synthesize buildManifest=_buildManifest - In the implementation block
+(id)defaultBundlePath;
-(void)dealloc;
-(NSData *)hash;
-(id)description;
-(id)initWithBundle:(id)arg1 ;
-(NSData *)certificate;
-(NSData *)signature;
-(id)initWithBundlePath:(id)arg1 ;
-(unsigned)productIDCode;
-(unsigned)firmwareImageBaseAddress;
-(unsigned)firmwareImageSize;
-(NSData *)firmwareImage;
-(id)initWithData:(id)arg1 hashData:(id)arg2 signatureData:(id)arg3 certData:(id)arg4 ;
-(void)setProductIDCode:(unsigned)arg1 ;
-(void)setBuildManifest:(NSDictionary *)arg1 ;
-(NSDictionary *)buildManifest;
-(void)calculateHash;
-(void)parseFileName:(id)arg1 intoPath:(id*)arg2 andExtension:(id*)arg3 ;
-(id)parseSRECFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2 ;
-(id)parseMSP430TXTFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2 ;
-(id)parseResourceFileIntoData:(id)arg1 ;
-(void)parseSRECLine:(id)arg1 intoImage:(id)arg2 ;
-(id)initWithBundleName:(id)arg1 ;
@end
