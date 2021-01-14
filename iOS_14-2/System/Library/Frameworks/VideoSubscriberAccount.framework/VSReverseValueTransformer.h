/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <Foundation/NSValueTransformer.h>

@class NSValueTransformer;

@interface VSReverseValueTransformer : NSValueTransformer {

	NSValueTransformer* _valueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * valueTransformer;              //@synthesize valueTransformer=_valueTransformer - In the implementation block
+(id)reverseValueTransformerWithValueTransformer:(id)arg1 ;
-(id)init;
-(id)reverseTransformedValue:(id)arg1 ;
-(void)setValueTransformer:(NSValueTransformer *)arg1 ;
-(NSValueTransformer *)valueTransformer;
-(id)transformedValue:(id)arg1 ;
-(id)initWithValueTransformer:(id)arg1 ;
@end

