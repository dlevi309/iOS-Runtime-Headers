/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSURL, NSDictionary;

@interface BLPurchaseRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _audiobook;
	BOOL _preOrder;
	BOOL _restore;
	NSString* _buyParameters;
	NSNumber* _storeIdentifier;
	NSURL* _permlink;
	NSString* _permlinkTitle;
	NSNumber* _accountIdentifier;
	NSDictionary* _analyticsInfo;

}

@property (nonatomic,copy) NSString * buyParameters;                         //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,retain) NSNumber * storeIdentifier;                     //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * permlink;                               //@synthesize permlink=_permlink - In the implementation block
@property (nonatomic,copy) NSString * permlinkTitle;                         //@synthesize permlinkTitle=_permlinkTitle - In the implementation block
@property (assign,getter=isPreOrder,nonatomic) BOOL preOrder;                //@synthesize preOrder=_preOrder - In the implementation block
@property (assign,getter=isAudiobook,nonatomic) BOOL audiobook;              //@synthesize audiobook=_audiobook - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                     //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * analyticsInfo;                   //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (assign,getter=isRestore,nonatomic) BOOL restore;                  //@synthesize restore=_restore - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithBuyParameters:(id)arg1 storeIdentifier:(id)arg2 ;
+(id)requestWithPermlink:(id)arg1 title:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)storeIdentifier;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(NSString *)buyParameters;
-(BOOL)isRestore;
-(void)setBuyParameters:(NSString *)arg1 ;
-(NSURL *)permlink;
-(void)setPermlink:(NSURL *)arg1 ;
-(void)setPreOrder:(BOOL)arg1 ;
-(void)setPermlinkTitle:(NSString *)arg1 ;
-(void)setAudiobook:(BOOL)arg1 ;
-(void)setRestore:(BOOL)arg1 ;
-(BOOL)isAudiobook;
-(BOOL)isPreOrder;
-(NSString *)permlinkTitle;
-(NSDictionary *)analyticsInfo;
-(void)setAnalyticsInfo:(NSDictionary *)arg1 ;
@end

