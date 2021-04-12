/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContextKitExtraction.framework/ContextKitExtraction
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSArray;

@interface CKContextDonation : NSObject <NSSecureCoding> {

	NSMutableArray* _items;
	unsigned long long _nonce;
	NSString* _donorBundleIdentifier;

}

@property (nonatomic,readonly) NSArray * items;                               //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) unsigned long long nonce;                        //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,readonly) NSString * donorBundleIdentifier;              //@synthesize donorBundleIdentifier=_donorBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)establishServiceConnection;
-(void)addItem:(id)arg1 ;
-(void)setNonce:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)donorBundleIdentifier;
-(void)donate;
-(NSArray *)items;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)nonce;
-(id)initWithDonorBundleIdentifier:(id)arg1 ;
-(id)initWithDonations:(id)arg1 donorBundleIdentifier:(id)arg2 ;
-(id)_concatenatedRequestTextUsingDebugText:(BOOL)arg1 ;
-(id)concatenatedRequestsText;
-(id)concatenatedRequestsDebugText;
@end

