/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (nonatomic,copy,readonly) EMObjectID * objectID; 
@property (nonatomic,copy,readonly) NSArray * availableRepresentations; 
@property (nonatomic,readonly) BOOL isAvailableLocally; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * contentID; 
@property (nonatomic,copy,readonly) NSString * UTType; 
@property (nonatomic,readonly) long long dataTransferByteCount; 
@property (nonatomic,readonly) long long storageByteCount; 
@property (nonatomic,copy,readonly) EMMailDropMetadata * mailDropMetadata; 
@property (nonatomic,readonly) int exchangeEventUID; 
@property (nonatomic,copy) id loaderBlock;                                              //@synthesize loaderBlock=_loaderBlock - In the implementation block
@property (assign,nonatomic) BOOL isSinglePagePDF;                                      //@synthesize isSinglePagePDF=_isSinglePagePDF - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLoaderBlock:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(NSString *)ef_publicDescription;
-(EMMailDropMetadata *)mailDropMetadata;
-(void)setMailDropMetadata:(EMMailDropMetadata *)arg1 ;
-(void)setUTType:(NSString *)arg1 ;
-(void)setIsAvailableLocally:(BOOL)arg1 ;
-(void)setDataTransferByteCount:(long long)arg1 ;
-(void)setStorageByteCount:(long long)arg1 ;
-(NSString *)UTType;
-(void)setExchangeEventUID:(int)arg1 ;
-(void)setAvailableRepresentations:(NSArray *)arg1 ;
-(int)exchangeEventUID;
-(id)requestRepresentationWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)availableRepresentations;
-(BOOL)isAvailableLocally;
-(BOOL)isSinglePagePDF;
-(long long)dataTransferByteCount;
-(long long)storageByteCount;
-(id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)loaderBlock;
-(BOOL)_isSinglePagePDFWithContentURL:(id)arg1 ;
-(void)setIsSinglePagePDF:(BOOL)arg1 ;
@end

