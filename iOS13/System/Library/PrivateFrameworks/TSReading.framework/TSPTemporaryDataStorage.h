/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	SFUCryptoKey* _decryptionKey;
	BOOL _isMissingData;

}

@property (assign,nonatomic) BOOL isMissingData;              //@synthesize isMissingData=_isMissingData - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 decryptionKey:(id)arg2 ;
-(BOOL)isMissingData;
-(void)setIsMissingData:(BOOL)arg1 ;
@end

