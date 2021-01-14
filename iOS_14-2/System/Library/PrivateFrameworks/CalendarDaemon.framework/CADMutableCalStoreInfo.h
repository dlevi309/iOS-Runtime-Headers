/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)rowID;
-(BOOL)isLocalStore;
-(void)setIsEnabled:(BOOL)arg1 ;
-(NSString *)storeName;
-(void)setDelegatedAccountOwnerAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(NSString *)delegatedAccountOwnerAccountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setStoreName:(NSString *)arg1 ;
-(void)setIsLocalStore:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setRowID:(int)arg1 ;
@end

