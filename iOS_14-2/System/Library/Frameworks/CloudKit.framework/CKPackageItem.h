/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSURL, NSData, NSNumber, NSString;

@interface CKPackageItem : NSObject {

	int _sectionIndex;
	long long _packageIndex;
	NSURL* _fileURL;
	unsigned long long _itemID;
	NSData* _signature;
	long long _size;
	long long _offset;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;
	NSData* _wrappedAssetKey;
	NSString* _itemTypeHint;

}

@property (assign,nonatomic) long long packageIndex;                 //@synthesize packageIndex=_packageIndex - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                          //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) unsigned long long itemID;              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSData * signature;                       //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) long long size;                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long offset;                       //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) int sectionIndex;                       //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,copy) NSNumber * deviceID;                      //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) NSNumber * fileID;                        //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,copy) NSNumber * generationID;                  //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,copy) NSData * wrappedAssetKey;                 //@synthesize wrappedAssetKey=_wrappedAssetKey - In the implementation block
@property (nonatomic,copy) NSString * itemTypeHint;                  //@synthesize itemTypeHint=_itemTypeHint - In the implementation block
-(void)setDeviceID:(NSNumber *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(NSNumber *)deviceID;
-(NSData *)signature;
-(NSData *)wrappedAssetKey;
-(id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3 ;
-(NSString *)itemTypeHint;
-(void)setItemTypeHint:(NSString *)arg1 ;
-(void)setWrappedAssetKey:(NSData *)arg1 ;
-(NSNumber *)generationID;
-(NSNumber *)fileID;
-(long long)size;
-(id)CKPropertiesDescription;
-(void)setSize:(long long)arg1 ;
-(int)sectionIndex;
-(long long)packageIndex;
-(void)setPackageIndex:(long long)arg1 ;
-(void)setSectionIndex:(int)arg1 ;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(long long)offset;
-(id)description;
-(unsigned long long)itemID;
-(void)setOffset:(long long)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(void)setFileID:(NSNumber *)arg1 ;
@end

