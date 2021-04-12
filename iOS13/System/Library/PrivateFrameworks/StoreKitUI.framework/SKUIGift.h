/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, SKUIItem, NSArray, SKUIGiftTheme;

@interface SKUIGift : NSObject <NSCopying> {

	long long _category;
	NSDate* _deliveryDate;
	long long _giftAmount;
	NSString* _giftAmountString;
	SKUIItem* _item;
	NSString* _message;
	NSArray* _recipientAddresses;
	NSString* _senderEmailAddress;
	NSString* _senderName;
	SKUIGiftTheme* _theme;
	NSString* _totalGiftAmountString;

}

@property (nonatomic,copy) NSString * totalGiftAmountString;              //@synthesize totalGiftAmountString=_totalGiftAmountString - In the implementation block
@property (nonatomic,copy) SKUIGiftTheme * theme;                         //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) SKUIItem * item;                           //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) long long giftCategory;                    //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDate * deliveryDate;                         //@synthesize deliveryDate=_deliveryDate - In the implementation block
@property (assign,nonatomic) long long giftAmount;                        //@synthesize giftAmount=_giftAmount - In the implementation block
@property (nonatomic,copy) NSString * giftAmountString;                   //@synthesize giftAmountString=_giftAmountString - In the implementation block
@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSArray * recipientAddresses;                  //@synthesize recipientAddresses=_recipientAddresses - In the implementation block
@property (nonatomic,copy) NSString * senderEmailAddress;                 //@synthesize senderEmailAddress=_senderEmailAddress - In the implementation block
@property (nonatomic,copy) NSString * senderName;                         //@synthesize senderName=_senderName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SKUIItem *)item;
-(void)reset;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)recipientAddresses;
-(id)initWithItem:(id)arg1 ;
-(SKUIGiftTheme *)theme;
-(void)setTheme:(SKUIGiftTheme *)arg1 ;
-(NSString *)senderEmailAddress;
-(void)setRecipientAddresses:(NSArray *)arg1 ;
-(void)setSenderEmailAddress:(NSString *)arg1 ;
-(NSDate *)deliveryDate;
-(long long)giftAmount;
-(NSString *)senderName;
-(id)initWithGiftCategory:(long long)arg1 ;
-(id)HTTPBodyDictionary;
-(void)setDeliveryDate:(NSDate *)arg1 ;
-(void)setGiftAmount:(long long)arg1 ;
-(NSString *)giftAmountString;
-(void)setGiftAmountString:(NSString *)arg1 ;
-(long long)giftCategory;
-(void)setSenderName:(NSString *)arg1 ;
-(NSString *)totalGiftAmountString;
-(void)setTotalGiftAmountString:(NSString *)arg1 ;
@end

