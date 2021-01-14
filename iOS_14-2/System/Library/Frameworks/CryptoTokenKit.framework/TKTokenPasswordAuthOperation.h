/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/TKTokenAuthOperation.h>

@class NSString;

@interface TKTokenPasswordAuthOperation : TKTokenAuthOperation {

	NSString* _password;
	NSString* _localizedPasswordLabel;

}

@property (copy) NSString * localizedPasswordLabel;              //@synthesize localizedPasswordLabel=_localizedPasswordLabel - In the implementation block
@property (copy) NSString * password;                            //@synthesize password=_password - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)importOperation:(id)arg1 ;
-(Class)baseClassForUI;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedPasswordLabel;
-(void)setLocalizedPasswordLabel:(NSString *)arg1 ;
@end

