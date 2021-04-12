/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class NSArray, NSString, EMMailDropMetadata;


@protocol EMMutableContentItem <EMExtendedContentItem>
@property (nonatomic,copy) NSArray * availableRepresentations; 
@property (assign,nonatomic) BOOL isAvailableLocally; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * contentID; 
@property (nonatomic,copy) NSString * UTType; 
@property (assign,nonatomic) BOOL isSinglePagePDF; 
@property (assign,nonatomic) long long dataTransferByteCount; 
@property (assign,nonatomic) long long storageByteCount; 
@property (nonatomic,copy) EMMailDropMetadata * mailDropMetadata; 
@property (assign,nonatomic) int exchangeEventUID; 
@required
-(void)setUTType:(id)arg1;
-(void)setIsAvailableLocally:(BOOL)arg1;
-(void)setDataTransferByteCount:(long long)arg1;
-(void)setStorageByteCount:(long long)arg1;
-(void)setExchangeEventUID:(int)arg1;
-(void)setAvailableRepresentations:(id)arg1;
-(int)exchangeEventUID;
-(NSString *)contentID;
-(void)setContentID:(id)arg1;
-(void)setDisplayName:(id)arg1;
-(EMMailDropMetadata *)mailDropMetadata;
-(void)setMailDropMetadata:(id)arg1;
-(NSArray *)availableRepresentations;
-(BOOL)isAvailableLocally;
-(BOOL)isSinglePagePDF;
-(long long)dataTransferByteCount;
-(long long)storageByteCount;
-(void)setIsSinglePagePDF:(BOOL)arg1;
-(NSString *)displayName;
-(NSString *)UTType;

@end

