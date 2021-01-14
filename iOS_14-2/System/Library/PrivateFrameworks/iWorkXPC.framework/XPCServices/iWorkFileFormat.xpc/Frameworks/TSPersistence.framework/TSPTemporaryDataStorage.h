/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	SFUCryptoKey* _decryptionKey;
	BOOL _isMissingData;

}

@property (assign,nonatomic) BOOL isMissingData;              //@synthesize isMissingData=_isMissingData - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)dealloc;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 decryptionKey:(id)arg2 ;
-(BOOL)isMissingData;
-(void)setIsMissingData:(BOOL)arg1 ;
@end

