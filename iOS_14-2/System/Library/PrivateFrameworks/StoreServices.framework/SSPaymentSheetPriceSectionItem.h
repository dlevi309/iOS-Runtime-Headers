/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSPaymentSheetPriceSectionItem : NSObject <NSCopying> {

	NSString* _label;
	NSString* _price;

}

@property (copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (copy) NSString * price;              //@synthesize price=_price - In the implementation block
-(NSString *)price;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPrice:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)_parseDictionary:(id)arg1 withCaseControl:(BOOL)arg2 ;
@end

