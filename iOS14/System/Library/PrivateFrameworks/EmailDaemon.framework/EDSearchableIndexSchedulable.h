/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

@class NSString;


@protocol EDSearchableIndexSchedulable <NSObject>
@property (assign,getter=isDataSourceIndexingPermitted,nonatomic) BOOL dataSourceIndexingPermitted; 
@property (getter=isPluggedIn,nonatomic,readonly) BOOL pluggedIn; 
@property (nonatomic,copy,readonly) NSString * indexName; 
@property (nonatomic,readonly) unsigned long long pendingIndexItemsCount; 
@required
-(unsigned long long)pendingIndexItemsCount;
-(BOOL)isPluggedIn;
-(NSString *)indexName;
-(BOOL)isDataSourceIndexingPermitted;
-(void)setDataSourceIndexingPermitted:(BOOL)arg1;

@end

