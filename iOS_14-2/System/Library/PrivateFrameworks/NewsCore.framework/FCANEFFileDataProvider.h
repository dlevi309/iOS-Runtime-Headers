/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAssetDataProvider.h>

@class NSData, NSString, FCInterestToken;

@interface FCANEFFileDataProvider : NSObject <FCAssetDataProvider> {

	NSString* _filePath;
	NSData* _wrappingKey;
	long long _options;
	FCInterestToken* _holdToken;

}

@property (nonatomic,copy,readonly) NSData * wrappingKey;                //@synthesize wrappingKey=_wrappingKey - In the implementation block
@property (nonatomic,readonly) long long options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) FCInterestToken * holdToken;              //@synthesize holdToken=_holdToken - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filePath;                      //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) BOOL isRawFileConsumable; 
-(NSString *)filePath;
-(FCInterestToken *)holdToken;
-(long long)options;
-(NSData *)data;
-(id)initWithFilePath:(id)arg1 wrappingKey:(id)arg2 options:(long long)arg3 holdToken:(id)arg4 ;
-(NSData *)wrappingKey;
-(BOOL)isRawFileConsumable;
@end

