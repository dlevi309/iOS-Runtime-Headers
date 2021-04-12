/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ASDPurchaseHistoryQuery : NSObject <NSSecureCoding> {

	long long _accountID;
	NSArray* _bundleIDs;
	long long _isFirstParty;
	long long _isHidden;
	long long _isPreorder;
	NSString* _searchTerm;
	NSArray* _sortOptions;
	NSArray* _storeIDs;

}

@property (assign) long long accountID;                 //@synthesize accountID=_accountID - In the implementation block
@property (copy) NSArray * bundleIDs;                   //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (assign) long long isFirstParty;              //@synthesize isFirstParty=_isFirstParty - In the implementation block
@property (assign) long long isHidden;                  //@synthesize isHidden=_isHidden - In the implementation block
@property (assign) long long isPreorder;                //@synthesize isPreorder=_isPreorder - In the implementation block
@property (copy) NSString * searchTerm;                 //@synthesize searchTerm=_searchTerm - In the implementation block
@property (copy) NSArray * sortOptions;                 //@synthesize sortOptions=_sortOptions - In the implementation block
@property (copy) NSArray * storeIDs;                    //@synthesize storeIDs=_storeIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)bundleIDs;
-(long long)isHidden;
-(void)setIsHidden:(long long)arg1 ;
-(long long)accountID;
-(void)setAccountID:(long long)arg1 ;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(long long)isPreorder;
-(NSArray *)storeIDs;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(long long)isFirstParty;
-(void)setIsFirstParty:(long long)arg1 ;
-(void)setIsPreorder:(long long)arg1 ;
-(NSArray *)sortOptions;
-(void)setSortOptions:(NSArray *)arg1 ;
@end

