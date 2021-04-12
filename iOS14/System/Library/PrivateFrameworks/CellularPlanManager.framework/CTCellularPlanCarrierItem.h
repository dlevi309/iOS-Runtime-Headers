/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _websheetURL;
	NSString* _planPurchaseEndpointType;
	NSString* _warningText;
	BOOL _applePaySupported;

}

@property (assign,nonatomic) BOOL applePaySupported;                             //@synthesize applePaySupported=_applePaySupported - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * websheetURL;                           //@synthesize websheetURL=_websheetURL - In the implementation block
@property (nonatomic,readonly) NSString * planPurchaseEndpointType;              //@synthesize planPurchaseEndpointType=_planPurchaseEndpointType - In the implementation block
@property (nonatomic,readonly) NSString * warningText;                           //@synthesize warningText=_warningText - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)warningText;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 url:(id)arg2 applePaySupported:(BOOL)arg3 responseType:(id)arg4 warningText:(id)arg5 ;
-(NSString *)websheetURL;
-(BOOL)applePaySupported;
-(void)setApplePaySupported:(BOOL)arg1 ;
-(NSString *)planPurchaseEndpointType;
@end

