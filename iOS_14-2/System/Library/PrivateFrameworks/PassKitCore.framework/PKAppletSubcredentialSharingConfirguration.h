/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKAppletSubcredentialSharingConfirguration : NSObject <NSSecureCoding> {

	BOOL _sharingRequiresPassword;
	unsigned long long _maxNumberOfSharedCredentials;
	unsigned long long _numberOfShareableCredentials;
	NSArray* _supportedEntitlements;

}

@property (assign,nonatomic) unsigned long long maxNumberOfSharedCredentials;              //@synthesize maxNumberOfSharedCredentials=_maxNumberOfSharedCredentials - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfShareableCredentials;              //@synthesize numberOfShareableCredentials=_numberOfShareableCredentials - In the implementation block
@property (nonatomic,copy) NSArray * supportedEntitlements;                                //@synthesize supportedEntitlements=_supportedEntitlements - In the implementation block
@property (assign,nonatomic) BOOL sharingRequiresPassword;                                 //@synthesize sharingRequiresPassword=_sharingRequiresPassword - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)supportedEntitlementWithValue:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfSharedCredentials;
-(void)setMaxNumberOfSharedCredentials:(unsigned long long)arg1 ;
-(unsigned long long)numberOfShareableCredentials;
-(void)setNumberOfShareableCredentials:(unsigned long long)arg1 ;
-(NSArray *)supportedEntitlements;
-(void)setSupportedEntitlements:(NSArray *)arg1 ;
-(BOOL)sharingRequiresPassword;
-(void)setSharingRequiresPassword:(BOOL)arg1 ;
@end

