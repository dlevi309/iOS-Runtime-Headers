/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)price;
-(void)setPrice:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_parseDictionary:(id)arg1 withCaseControl:(BOOL)arg2 ;
@end

