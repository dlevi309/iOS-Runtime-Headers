/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)vendorName;
-(NSString *)itemName;
-(NSData *)iconData;
-(void)setIconData:(NSData *)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(id)initWithVendorName:(id)arg1 itemName:(id)arg2 iconData:(id)arg3 ;
-(void)setItemName:(NSString *)arg1 ;
@end

