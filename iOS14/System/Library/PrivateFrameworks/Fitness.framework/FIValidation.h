/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


@class NSString;

@interface FIValidation : NSObject {

	NSString* _name;
	/*^block*/id _test;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id test;                      //@synthesize test=_test - In the implementation block
+(id)validationWithName:(id)arg1 test:(/*^block*/id)arg2 ;
+(BOOL)performValidations:(id)arg1 withObject:(id)arg2 error:(id*)arg3 ;
-(id)test;
-(NSString *)name;
-(BOOL)validateObject:(id)arg1 withError:(id*)arg2 ;
@end

