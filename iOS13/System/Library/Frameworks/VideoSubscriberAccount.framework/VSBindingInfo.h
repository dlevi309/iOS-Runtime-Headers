/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSString, NSDictionary, NSValueTransformer;

@interface VSBindingInfo : NSObject {

	id _unsafeObservedObject;
	id _weakObservedObject;
	NSString* _keyPath;
	NSDictionary* _options;
	NSValueTransformer* _valueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * valueTransformer;              //@synthesize valueTransformer=_valueTransformer - In the implementation block
@property (nonatomic,readonly) id unsafeObservedObject;                          //@synthesize unsafeObservedObject=_unsafeObservedObject - In the implementation block
@property (nonatomic,__weak,readonly) id weakObservedObject;                     //@synthesize weakObservedObject=_weakObservedObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                          //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id value; 
-(id)init;
-(NSDictionary *)options;
-(id)value;
-(NSString *)keyPath;
-(void)setValue:(id)arg1 ;
-(NSValueTransformer *)valueTransformer;
-(void)setValueTransformer:(NSValueTransformer *)arg1 ;
-(void)requireExpectedConcurrency;
-(id)weakObservedObject;
-(id)unsafeObservedObject;
-(id)initWithObservedObject:(id)arg1 keyPath:(id)arg2 options:(id)arg3 ;
@end

