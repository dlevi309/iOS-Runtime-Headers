/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)displayName;
-(void)setDisplayName:(id)arg1;
-(NSString *)contentID;
-(void)setContentID:(id)arg1;
-(EMMailDropMetadata *)mailDropMetadata;
-(void)setMailDropMetadata:(id)arg1;
-(void)setUTType:(id)arg1;
-(void)setIsAvailableLocally:(BOOL)arg1;
-(void)setDataTransferByteCount:(long long)arg1;
-(void)setStorageByteCount:(long long)arg1;
-(NSString *)UTType;
-(void)setExchangeEventUID:(int)arg1;
-(void)setAvailableRepresentations:(id)arg1;
-(int)exchangeEventUID;
-(NSArray *)availableRepresentations;
-(BOOL)isAvailableLocally;
-(BOOL)isSinglePagePDF;
-(long long)dataTransferByteCount;
-(long long)storageByteCount;
-(void)setIsSinglePagePDF:(BOOL)arg1;

@end

