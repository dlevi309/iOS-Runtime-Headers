/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSString;

@interface VSCredentialEntryPickerItem : NSObject {

	NSString* _itemName;
	NSString* _itemValue;
	NSString* _itemId;

}

@property (nonatomic,copy) NSString * itemName;               //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSString * itemValue;              //@synthesize itemValue=_itemValue - In the implementation block
@property (nonatomic,copy) NSString * itemId;                 //@synthesize itemId=_itemId - In the implementation block
-(NSString *)itemId;
-(NSString *)itemName;
-(void)setItemName:(NSString *)arg1 ;
-(void)setItemId:(NSString *)arg1 ;
-(NSString *)itemValue;
-(void)setItemValue:(NSString *)arg1 ;
@end

