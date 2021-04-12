/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSMutableDictionary, NSArray, NSData;

@interface SSVGratisRequestBody : NSObject <NSCopying> {

	NSNumber* _accountID;
	NSMutableDictionary* _additionalParameters;
	NSArray* _applications;
	BOOL _backgroundRequest;
	NSArray* _bundleIdentifiers;
	NSArray* _itemIdentifiers;
	long long _style;

}

@property (nonatomic,readonly) long long requestStyle;                                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                                     //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSArray * applications;                                           //@synthesize applications=_applications - In the implementation block
@property (assign,getter=isBackgroundRequest,nonatomic) BOOL backgroundRequest;              //@synthesize backgroundRequest=_backgroundRequest - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifiers;                                      //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * itemIdentifiers;                                        //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * bodyDictionary; 
@property (nonatomic,readonly) NSData * JSONBodyData; 
@property (nonatomic,readonly) NSData * propertyListBodyData; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)applications;
-(void)setApplications:(NSArray *)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSArray *)itemIdentifiers;
-(NSArray *)bundleIdentifiers;
-(long long)requestStyle;
-(NSMutableDictionary *)bodyDictionary;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(BOOL)isBackgroundRequest;
-(void)setBackgroundRequest:(BOOL)arg1 ;
-(id)initWithRequestStyle:(long long)arg1 ;
-(NSData *)JSONBodyData;
-(NSData *)propertyListBodyData;
-(void)setValue:(id)arg1 forBodyParameter:(id)arg2 ;
@end

