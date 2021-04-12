/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

