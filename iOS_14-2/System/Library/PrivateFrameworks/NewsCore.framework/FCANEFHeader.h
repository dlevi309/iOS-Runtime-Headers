/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)headerData;
-(id)initWithHeaderData:(id)arg1 wrappingKeyID:(id)arg2 wrappedKey:(id)arg3 contentType:(id)arg4 ;
-(id)initWithFileHandle:(id)arg1 ;
-(NSData *)wrappingKeyID;
-(id)initWithWrappingKeyID:(id)arg1 wrappedKey:(id)arg2 contentType:(id)arg3 ;
-(unsigned long long)totalLength;
-(NSData *)wrappedKey;
-(id)initWithFilePath:(id)arg1 ;
@end

