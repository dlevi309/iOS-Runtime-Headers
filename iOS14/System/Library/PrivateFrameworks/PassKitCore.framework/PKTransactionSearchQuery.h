/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSearchQuery.h>

@class NSString;

@interface PKTransactionSearchQuery : PKSearchQuery {

	NSString* _passUniqueIdentifier;

}

@property (nonatomic,retain) NSString * passUniqueIdentifier;              //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)domain;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 keyboardLanguage:(id)arg2 passUniqueIdentifier:(id)arg3 ;
@end

