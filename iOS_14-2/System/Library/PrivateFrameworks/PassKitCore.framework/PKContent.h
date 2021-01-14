/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKBarcode, NSArray, NSURL, NSString;

@interface PKContent : NSObject <NSSecureCoding> {

	PKBarcode* _barcode;
	NSArray* _storeIdentifiers;
	NSURL* _appLaunchURL;
	NSString* _localizedDescription;

}

@property (nonatomic,retain) PKBarcode * barcode;                        //@synthesize barcode=_barcode - In the implementation block
@property (nonatomic,copy) NSArray * storeIdentifiers;                   //@synthesize storeIdentifiers=_storeIdentifiers - In the implementation block
@property (nonatomic,copy) NSURL * appLaunchURL;                         //@synthesize appLaunchURL=_appLaunchURL - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contentWithFileURL:(id)arg1 ;
-(PKBarcode *)barcode;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedDescription;
-(NSArray *)storeIdentifiers;
-(void)flushFormattedFieldValues;
-(void)setBarcode:(PKBarcode *)arg1 ;
-(void)setStoreIdentifiers:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 ;
-(void)setAppLaunchURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSURL *)appLaunchURL;
@end

