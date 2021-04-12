/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSData *)data;
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)filePath;
-(FCInterestToken *)holdToken;
-(BOOL)isRawFileConsumable;
-(id)initWithFilePath:(id)arg1 holdToken:(id)arg2 ;
@end

