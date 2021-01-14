/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface WLKAppProxy : NSObject <NSSecureCoding> {

	BOOL _isEntitled;
	BOOL _isBetaApp;
	BOOL _isAppStoreVendable;
	BOOL _isSystemApp;
	BOOL _supportsTVApp;
	NSString* _bundleIdentifier;
	NSString* _version;
	NSString* _subscriptionInfo;
	NSNumber* _itemID;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                       //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL isEntitled;                               //@synthesize isEntitled=_isEntitled - In the implementation block
@property (nonatomic,readonly) BOOL isBetaApp;                                //@synthesize isBetaApp=_isBetaApp - In the implementation block
@property (nonatomic,readonly) BOOL isAppStoreVendable;                       //@synthesize isAppStoreVendable=_isAppStoreVendable - In the implementation block
@property (nonatomic,readonly) BOOL isSystemApp;                              //@synthesize isSystemApp=_isSystemApp - In the implementation block
@property (nonatomic,readonly) BOOL isTVApp; 
@property (nonatomic,readonly) BOOL supportsTVApp;                            //@synthesize supportsTVApp=_supportsTVApp - In the implementation block
@property (nonatomic,copy,readonly) NSString * subscriptionInfo;              //@synthesize subscriptionInfo=_subscriptionInfo - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * itemID;                        //@synthesize itemID=_itemID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(BOOL)isAppStoreVendable;
-(BOOL)isEntitled;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isSystemApp;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSNumber *)itemID;
-(BOOL)isTVApp;
-(BOOL)isBetaApp;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subscriptionInfo;
-(NSString *)version;
-(BOOL)supportsTVApp;
@end

