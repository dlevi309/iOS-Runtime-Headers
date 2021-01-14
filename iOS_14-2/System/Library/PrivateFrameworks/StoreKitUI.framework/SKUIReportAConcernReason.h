/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSNumber, NSString;

@interface SKUIReportAConcernReason : NSObject {

	NSNumber* _reasonID;
	NSString* _name;
	NSString* _uppercaseName;

}

@property (nonatomic,copy) NSNumber * reasonID;                   //@synthesize reasonID=_reasonID - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * uppercaseName;              //@synthesize uppercaseName=_uppercaseName - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)reasonID;
-(NSString *)uppercaseName;
-(void)setReasonID:(NSNumber *)arg1 ;
-(void)setUppercaseName:(NSString *)arg1 ;
@end

