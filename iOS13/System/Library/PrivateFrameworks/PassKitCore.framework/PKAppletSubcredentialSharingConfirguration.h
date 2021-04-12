/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKAppletSubcredentialSharingConfirguration : NSObject <NSSecureCoding> {

	BOOL _sharingRequiresPassword;
	unsigned long long _maxNumberOfSharedCredentials;
	NSArray* _supportedEntitlements;

}

@property (assign,nonatomic) unsigned long long maxNumberOfSharedCredentials;              //@synthesize maxNumberOfSharedCredentials=_maxNumberOfSharedCredentials - In the implementation block
@property (nonatomic,copy) NSArray * supportedEntitlements;                                //@synthesize supportedEntitlements=_supportedEntitlements - In the implementation block
@property (assign,nonatomic) BOOL sharingRequiresPassword;                                 //@synthesize sharingRequiresPassword=_sharingRequiresPassword - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)asDictionary;
-(id)supportedEntitlementWithValue:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfSharedCredentials;
-(void)setMaxNumberOfSharedCredentials:(unsigned long long)arg1 ;
-(NSArray *)supportedEntitlements;
-(void)setSupportedEntitlements:(NSArray *)arg1 ;
-(BOOL)sharingRequiresPassword;
-(void)setSharingRequiresPassword:(BOOL)arg1 ;
@end

