/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

@class NSString;


@protocol REMExternalSyncMetadataWritableProviding
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
@required
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1;
-(NSString *)daSyncToken;
-(void)setDaSyncToken:(id)arg1;
-(NSString *)daPushKey;
-(void)setDaPushKey:(id)arg1;

@end

