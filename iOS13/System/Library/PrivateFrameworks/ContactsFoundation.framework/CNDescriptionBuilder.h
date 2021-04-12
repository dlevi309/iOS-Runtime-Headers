/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSObject, NSMutableString, NSString;

@interface CNDescriptionBuilder : NSObject {

	NSObject* _object;
	NSMutableString* _description;
	NSString* _separator;

}

@property (nonatomic,copy) NSString * separator;              //@synthesize separator=_separator - In the implementation block
+(id)descriptionBuilderWithObject:(id)arg1 ;
+(id)descriptionForObject:(id)arg1 withNamesAndObjects:(id)arg2 ;
-(id)appendName:(id)arg1 vCardOutputVersionValue:(unsigned long long)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(id)build;
-(id)appendObject:(id)arg1 withName:(id)arg2 ;
-(void)tryAppendKey:(id)arg1 ;
-(id)appendKey:(id)arg1 ;
-(id)appendKeys:(id)arg1 ;
-(NSString *)separator;
-(void)setSeparator:(NSString *)arg1 ;
-(id)appendName:(id)arg1 object:(id)arg2 ;
-(id)appendName:(id)arg1 integerValue:(long long)arg2 ;
-(id)appendNamesAndObjects:(id)arg1 ;
-(id)appendName:(id)arg1 boolValue:(BOOL)arg2 ;
-(id)appendName:(id)arg1 unsignedInteger:(unsigned long long)arg2 ;
-(id)appendName:(id)arg1 intValue:(int)arg2 ;
-(id)appendName:(id)arg1 doubleValue:(double)arg2 ;
-(id)appendName:(id)arg1 pointerValue:(void*)arg2 ;
-(id)appendName:(id)arg1 selector:(SEL)arg2 ;
-(id)appendName:(id)arg1 timeInterval:(double)arg2 ;
-(id)appendNamesAndObjects:(id)arg1 args:(char*)arg2 ;
@end

