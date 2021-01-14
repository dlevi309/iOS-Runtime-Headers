/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSDate, NSString, NSArray;


@protocol PXInboxModel <NSObject,NSCopying>
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) long long inboxModelType; 
@property (nonatomic,copy,readonly) NSString * inboxModelTitle; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,copy,readonly) NSArray * senderNames; 
@property (nonatomic,readonly) BOOL userIsSender; 
@property (assign,getter=isSeen,nonatomic) BOOL seen; 
@property (nonatomic,readonly) NSArray * leftPreviewItems; 
@property (nonatomic,readonly) NSArray * assetsForOneUp; 
@property (nonatomic,readonly) NSString * ownerFirstName; 
@property (nonatomic,readonly) NSString * ownerLastName; 
@property (nonatomic,readonly) NSString * ownerEmail; 
@property (nonatomic,readonly) NSString * keyCommentGUID; 
@optional
-(NSString *)ownerEmail;
-(NSString *)ownerLastName;
-(NSString *)ownerFirstName;
-(NSArray *)assetsForOneUp;
-(void)fetchLeftPreviewItemsWithCompletion:(/*^block*/id)arg1;
-(NSString *)keyCommentGUID;

@required
-(unsigned long long)assetsCount;
-(long long)inboxModelType;
-(BOOL)isSeen;
-(NSDate *)creationDate;
-(void)setSeen:(BOOL)arg1;
-(BOOL)userIsSender;
-(NSString *)inboxModelTitle;
-(NSArray *)senderNames;
-(NSArray *)leftPreviewItems;

@end

