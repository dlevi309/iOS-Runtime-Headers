/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSData, NSString;

@interface FCANEFHeader : NSObject {

	NSData* _wrappingKeyID;
	NSData* _wrappedKey;
	NSString* _contentType;
	NSData* _headerData;

}

@property (nonatomic,copy,readonly) NSData * wrappingKeyID;                 //@synthesize wrappingKeyID=_wrappingKeyID - In the implementation block
@property (nonatomic,copy,readonly) NSData * wrappedKey;                    //@synthesize wrappedKey=_wrappedKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentType;                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) unsigned long long totalLength; 
@property (nonatomic,copy,readonly) NSData * headerData;                    //@synthesize headerData=_headerData - In the implementation block
-(id)init;
-(NSString *)contentType;
-(id)initWithFilePath:(id)arg1 ;
-(id)initWithFileHandle:(id)arg1 ;
-(NSData *)wrappedKey;
-(unsigned long long)totalLength;
-(NSData *)headerData;
-(id)initWithHeaderData:(id)arg1 wrappingKeyID:(id)arg2 wrappedKey:(id)arg3 contentType:(id)arg4 ;
-(id)initWithWrappingKeyID:(id)arg1 wrappedKey:(id)arg2 contentType:(id)arg3 ;
-(NSData *)wrappingKeyID;
@end

