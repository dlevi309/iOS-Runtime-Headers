/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface WLKAppProxy : NSObject <NSSecureCoding> {

	BOOL _isEntitled;
	BOOL _isBetaApp;
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
@property (nonatomic,readonly) BOOL isSystemApp;                              //@synthesize isSystemApp=_isSystemApp - In the implementation block
@property (nonatomic,readonly) BOOL isTVApp; 
@property (nonatomic,readonly) BOOL supportsTVApp;                            //@synthesize supportsTVApp=_supportsTVApp - In the implementation block
@property (nonatomic,copy,readonly) NSString * subscriptionInfo;              //@synthesize subscriptionInfo=_subscriptionInfo - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * itemID;                        //@synthesize itemID=_itemID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(BOOL)isBetaApp;
-(NSNumber *)itemID;
-(NSString *)subscriptionInfo;
-(BOOL)isEntitled;
-(BOOL)isSystemApp;
-(BOOL)isTVApp;
-(BOOL)supportsTVApp;
@end

