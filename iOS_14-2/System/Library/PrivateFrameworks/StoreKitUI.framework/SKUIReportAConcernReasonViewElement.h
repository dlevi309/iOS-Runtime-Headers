/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSNumber, NSString;

@interface SKUIReportAConcernReasonViewElement : SKUIViewElement {

	NSNumber* _reasonID;
	NSString* _name;
	NSString* _uppercaseName;

}

@property (nonatomic,copy,readonly) NSNumber * reasonID;                   //@synthesize reasonID=_reasonID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * uppercaseName;              //@synthesize uppercaseName=_uppercaseName - In the implementation block
-(NSString *)name;
-(NSNumber *)reasonID;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(NSString *)uppercaseName;
@end

