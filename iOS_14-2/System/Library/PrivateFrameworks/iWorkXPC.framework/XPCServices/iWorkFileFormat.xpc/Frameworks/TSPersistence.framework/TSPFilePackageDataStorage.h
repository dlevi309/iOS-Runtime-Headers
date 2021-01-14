/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPStreamDataStorage.h>

@protocol TSPCryptoInfo;
@class NSString, TSPFilePackage;

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {

	NSString* _path;
	id<TSPCryptoInfo> _decryptionInfo;
	TSPFilePackage* _package;
	AB _didCalculateEncodedLength;
	AQ _encodedLength;
	AB _didCalculateCRC;
	AI _CRC;
	AB _isMissingData;
	BOOL _gilligan_isRemote;

}
-(unsigned)CRC;
-(BOOL)isReadable;
-(id)init;
-(unsigned long long)encodedLength;
-(unsigned long long)length;
-(unsigned char)packageIdentifier;
-(id)streamReadChannel;
-(id)packageLocator;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(BOOL)isInPackage:(id)arg1 ;
-(BOOL)isMissingData;
-(id)decryptionInfo;
-(BOOL)gilligan_isRemote;
-(BOOL)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(BOOL)arg3 ;
-(void)setGilligan_isRemote:(BOOL)arg1 ;
-(void)didInitializeFromDocumentURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 error:(id*)arg5 ;
-(void)setEncodedLength:(unsigned long long)arg1 isMissingData:(BOOL)arg2 ;
@end

