/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSVURLDataConsumer.h>

@class NSRegularExpression;

@interface SKUITemplateParsingDataProvider : SSVURLDataConsumer {

	NSRegularExpression* _regularExpression;

}

@property (nonatomic,readonly) NSRegularExpression * regularExpression;              //@synthesize regularExpression=_regularExpression - In the implementation block
+(id)templateParsingRegularExpression;
-(NSRegularExpression *)regularExpression;
-(id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(id)initWithRegularExpression:(id)arg1 ;
@end

