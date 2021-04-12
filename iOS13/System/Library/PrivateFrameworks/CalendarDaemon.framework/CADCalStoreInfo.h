/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CADCalStoreInfo
@property (nonatomic,readonly) int rowID; 
@property (nonatomic,readonly) BOOL isLocalStore; 
@property (nonatomic,readonly) BOOL isEnabled; 
@required
-(BOOL)isEnabled;
-(id)accountIdentifier;
-(id)storeName;
-(int)rowID;
-(id)delegatedAccountOwnerAccountIdentifier;
-(BOOL)isLocalStore;

@end

