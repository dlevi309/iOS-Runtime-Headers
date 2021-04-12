/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

@class NSString;


@protocol EDSearchableIndexSchedulable <NSObject>
@property (assign,getter=isDataSourceIndexingPermitted,nonatomic) BOOL dataSourceIndexingPermitted; 
@property (getter=isPluggedIn,nonatomic,readonly) BOOL pluggedIn; 
@property (nonatomic,copy,readonly) NSString * indexName; 
@property (nonatomic,readonly) unsigned long long pendingIndexItemsCount; 
@required
-(NSString *)indexName;
-(BOOL)isPluggedIn;
-(unsigned long long)pendingIndexItemsCount;
-(BOOL)isDataSourceIndexingPermitted;
-(void)setDataSourceIndexingPermitted:(BOOL)arg1;

@end

