/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SKUIGiftAmount : NSObject <NSCopying> {

	NSString* _displayLabel;
	NSString* _partNumber;
	NSNumber* _value;

}

@property (nonatomic,copy) NSString * displayLabel;              //@synthesize displayLabel=_displayLabel - In the implementation block
@property (nonatomic,copy) NSString * partNumber;                //@synthesize partNumber=_partNumber - In the implementation block
@property (nonatomic,copy) NSNumber * value;                     //@synthesize value=_value - In the implementation block
-(void)setValue:(NSNumber *)arg1 ;
-(void)setDisplayLabel:(NSString *)arg1 ;
-(NSString *)displayLabel;
-(NSString *)partNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)value;
-(id)HTTPBodyDictionary;
-(id)initWithAmountDictionary:(id)arg1 ;
-(void)setPartNumber:(NSString *)arg1 ;
@end

