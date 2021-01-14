/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/GCControllerProductInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class NSString, NSNumber;

@interface GCProductInformation : NSObject <GCControllerProductInfo, NSSecureCoding> {

	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	NSString* _productCategory;
	NSString* _detailedProductCategory;
	NSString* _vendorName;
	NSNumber* _attachedToDevice;

}

@property (nonatomic,copy) NSString * productCategory;                                         //@synthesize productCategory=_productCategory - In the implementation block
@property (nonatomic,copy) NSString * detailedProductCategory;                                 //@synthesize detailedProductCategory=_detailedProductCategory - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                                              //@synthesize vendorName=_vendorName - In the implementation block
@property (getter=isAttachedToDevice,nonatomic,copy) NSNumber * attachedToDevice;              //@synthesize attachedToDevice=_attachedToDevice - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)vendorName;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(NSString *)productCategory;
-(void)setProductCategory:(NSString *)arg1 ;
-(NSString *)detailedProductCategory;
-(id)isAttachedToDevice;
-(void)setDetailedProductCategory:(NSString *)arg1 ;
-(void)setAttachedToDevice:(NSNumber *)arg1 ;
@end

