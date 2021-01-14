/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class NSArray, NSString, EMMailDropMetadata;


@protocol EMContentItem <EFPubliclyDescribable>
@property (nonatomic,copy,readonly) NSArray * availableRepresentations; 
@property (nonatomic,readonly) BOOL isAvailableLocally; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * contentID; 
@property (nonatomic,copy,readonly) NSString * UTType; 
@property (nonatomic,readonly) long long dataTransferByteCount; 
@property (nonatomic,readonly) long long storageByteCount; 
@property (nonatomic,copy,readonly) EMMailDropMetadata * mailDropMetadata; 
@property (nonatomic,readonly) int exchangeEventUID; 
@required
-(int)exchangeEventUID;
-(NSString *)contentID;
-(EMMailDropMetadata *)mailDropMetadata;
-(NSArray *)availableRepresentations;
-(BOOL)isAvailableLocally;
-(long long)dataTransferByteCount;
-(long long)storageByteCount;
-(id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(NSString *)displayName;
-(id)requestRepresentationWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSString *)UTType;

@end

