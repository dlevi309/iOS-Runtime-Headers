/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADCalStoreInfo.h>

@class NSString;

@interface CADMutableCalStoreInfo : NSObject <CADCalStoreInfo> {

	BOOL _isLocalStore;
	BOOL _isEnabled;
	int _rowID;
	NSString* _storeName;
	NSString* _accountIdentifier;
	NSString* _delegatedAccountOwnerAccountIdentifier;

}

@property (assign,nonatomic) int rowID;                                                    //@synthesize rowID=_rowID - In the implementation block
@property (assign,nonatomic) BOOL isLocalStore;                                            //@synthesize isLocalStore=_isLocalStore - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                                               //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,copy) NSString * storeName;                                           //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * delegatedAccountOwnerAccountIdentifier;              //@synthesize delegatedAccountOwnerAccountIdentifier=_delegatedAccountOwnerAccountIdentifier - In the implementation block
-(void)setStoreName:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)storeName;
-(void)setIsEnabled:(BOOL)arg1 ;
-(int)rowID;
-(NSString *)delegatedAccountOwnerAccountIdentifier;
-(BOOL)isLocalStore;
-(void)setRowID:(int)arg1 ;
-(void)setIsLocalStore:(BOOL)arg1 ;
-(void)setDelegatedAccountOwnerAccountIdentifier:(NSString *)arg1 ;
@end

