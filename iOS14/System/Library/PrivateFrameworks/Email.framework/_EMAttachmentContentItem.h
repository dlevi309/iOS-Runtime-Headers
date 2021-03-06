/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMObject.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/EMMutableContentItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, EMMailDropMetadata, EMObjectID;

@interface _EMAttachmentContentItem : EMObject <EFPubliclyDescribable, EMMutableContentItem, NSSecureCoding> {

	BOOL _isAvailableLocally;
	BOOL _isSinglePagePDF;
	int _exchangeEventUID;
	NSArray* _availableRepresentations;
	NSString* _contentID;
	long long _dataTransferByteCount;
	NSString* _displayName;
	/*^block*/id _loaderBlock;
	long long _storageByteCount;
	NSString* _UTType;
	EMMailDropMetadata* _mailDropMetadata;

}

@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * availableRepresentations;                    //@synthesize availableRepresentations=_availableRepresentations - In the implementation block
@property (assign,nonatomic) BOOL isAvailableLocally;                             //@synthesize isAvailableLocally=_isAvailableLocally - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * contentID;                                  //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,copy) NSString * UTType;                                     //@synthesize UTType=_UTType - In the implementation block
@property (assign,nonatomic) BOOL isSinglePagePDF;                                //@synthesize isSinglePagePDF=_isSinglePagePDF - In the implementation block
@property (assign,nonatomic) long long dataTransferByteCount;                     //@synthesize dataTransferByteCount=_dataTransferByteCount - In the implementation block
@property (assign,nonatomic) long long storageByteCount;                          //@synthesize storageByteCount=_storageByteCount - In the implementation block
@property (nonatomic,copy) EMMailDropMetadata * mailDropMetadata;                 //@synthesize mailDropMetadata=_mailDropMetadata - In the implementation block
@property (assign,nonatomic) int exchangeEventUID;                                //@synthesize exchangeEventUID=_exchangeEventUID - In the implementation block
@property (nonatomic,copy) id loaderBlock;                                        //@synthesize loaderBlock=_loaderBlock - In the implementation block
@property (nonatomic,copy,readonly) EMObjectID * objectID; 
+(BOOL)supportsSecureCoding;
-(void)setUTType:(NSString *)arg1 ;
-(void)setIsAvailableLocally:(BOOL)arg1 ;
-(id)init;
-(void)setDataTransferByteCount:(long long)arg1 ;
-(void)setStorageByteCount:(long long)arg1 ;
-(void)setExchangeEventUID:(int)arg1 ;
-(void)setAvailableRepresentations:(NSArray *)arg1 ;
-(int)exchangeEventUID;
-(NSString *)ef_publicDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(NSString *)description;
-(void)setLoaderBlock:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(EMMailDropMetadata *)mailDropMetadata;
-(void)setMailDropMetadata:(EMMailDropMetadata *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)availableRepresentations;
-(BOOL)isAvailableLocally;
-(BOOL)isSinglePagePDF;
-(long long)dataTransferByteCount;
-(long long)storageByteCount;
-(id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)loaderBlock;
-(BOOL)_isSinglePagePDFWithContentURL:(id)arg1 ;
-(void)setIsSinglePagePDF:(BOOL)arg1 ;
-(NSString *)displayName;
-(id)requestRepresentationWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)UTType;
@end

