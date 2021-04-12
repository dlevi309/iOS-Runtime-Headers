/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKDisbursementApplicationInformation : NSObject <NSSecureCoding> {

	NSString* _vendorName;
	NSString* _itemName;
	NSData* _iconData;

}

@property (nonatomic,copy) NSString * vendorName;              //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,copy) NSString * itemName;                //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSData * iconData;                  //@synthesize iconData=_iconData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)vendorName;
-(NSData *)iconData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)itemName;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIconData:(NSData *)arg1 ;
-(id)initWithVendorName:(id)arg1 itemName:(id)arg2 iconData:(id)arg3 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

