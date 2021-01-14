/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAssetDataProvider.h>

@class NSString, FCInterestToken, NSData;

@interface FCRawFileDataProvider : NSObject <FCAssetDataProvider> {

	BOOL _isRawFileConsumable;
	NSString* _filePath;
	FCInterestToken* _holdToken;

}

@property (nonatomic,readonly) FCInterestToken * holdToken;              //@synthesize holdToken=_holdToken - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filePath;                      //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) BOOL isRawFileConsumable;                 //@synthesize isRawFileConsumable=_isRawFileConsumable - In the implementation block
-(NSString *)filePath;
-(id)init;
-(FCInterestToken *)holdToken;
-(NSData *)data;
-(id)initWithFilePath:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 holdToken:(id)arg2 ;
-(BOOL)isRawFileConsumable;
@end

