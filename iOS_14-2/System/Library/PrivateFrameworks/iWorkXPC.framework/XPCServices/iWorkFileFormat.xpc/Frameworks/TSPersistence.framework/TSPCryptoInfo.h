/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

@class SFUCryptoKey, NSArray;


@protocol TSPCryptoInfo <NSObject>
@property (nonatomic,readonly) SFUCryptoKey * cryptoKey; 
@property (nonatomic,readonly) unsigned long long preferredBlockSize; 
@property (nonatomic,readonly) NSArray * blockInfos; 
@property (nonatomic,readonly) BOOL hasDecodedLength; 
@property (nonatomic,readonly) unsigned long long decodedLength; 
@required
-(unsigned long long)preferredBlockSize;
-(SFUCryptoKey *)cryptoKey;
-(unsigned long long)decodedLength;
-(NSArray *)blockInfos;
-(id)mutableCryptoInfoCopy;
-(BOOL)hasDecodedLength;

@end

