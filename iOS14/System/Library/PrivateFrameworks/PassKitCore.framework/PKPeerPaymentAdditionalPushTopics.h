/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPeerPaymentAdditionalPushTopics : NSObject <NSSecureCoding, NSCopying> {

	NSString* _preferences;
	NSString* _associatedAccounts;

}

@property (nonatomic,copy) NSString * preferences;                     //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,copy) NSString * associatedAccounts;              //@synthesize associatedAccounts=_associatedAccounts - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)preferences;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPreferences:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)associatedAccounts;
-(void)setAssociatedAccounts:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

