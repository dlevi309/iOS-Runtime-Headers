/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

@class NSString;


@protocol REMExternalSyncMetadataWritableProviding
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
@required
-(NSString *)daPushKey;
-(void)setExternalIdentifier:(id)arg1;
-(void)setDaPushKey:(id)arg1;
-(void)setExternalModificationTag:(id)arg1;
-(NSString *)daSyncToken;
-(NSString *)externalModificationTag;
-(NSString *)externalIdentifier;
-(void)setDaSyncToken:(id)arg1;

@end

