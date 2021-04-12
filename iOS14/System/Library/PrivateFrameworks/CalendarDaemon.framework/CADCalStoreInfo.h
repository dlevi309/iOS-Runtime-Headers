/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CADCalStoreInfo
@property (nonatomic,readonly) int rowID; 
@property (nonatomic,readonly) BOOL isLocalStore; 
@property (nonatomic,readonly) BOOL isEnabled; 
@required
-(int)rowID;
-(BOOL)isLocalStore;
-(id)storeName;
-(id)accountIdentifier;
-(id)delegatedAccountOwnerAccountIdentifier;
-(BOOL)isEnabled;

@end

