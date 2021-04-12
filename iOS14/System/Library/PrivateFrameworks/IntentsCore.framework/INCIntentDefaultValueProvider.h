/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


@class INIntent;

@interface INCIntentDefaultValueProvider : NSObject {

	INIntent* _intent;

}

@property (nonatomic,copy,readonly) INIntent * intent;              //@synthesize intent=_intent - In the implementation block
-(INIntent *)intent;
-(id)initWithIntent:(id)arg1 ;
-(void)loadDefaultValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadDefaultValuesWithAttributes:(id)arg1 extensionProxy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isExpectedDefaultValueError:(id)arg1 ;
@end

