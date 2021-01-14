/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSString, NSSet;

@interface VSValueTypeProperty : NSObject {

	NSString* _name;
	unsigned long long _kind;
	NSSet* _allowedClasses;
	id _initialValue;

}

@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long kind;              //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSSet * allowedClasses;                 //@synthesize allowedClasses=_allowedClasses - In the implementation block
@property (nonatomic,retain) id initialValue;                      //@synthesize initialValue=_initialValue - In the implementation block
+(id)valueTypePropertyWithName:(id)arg1 kind:(unsigned long long)arg2 allowedClasses:(id)arg3 initialValue:(id)arg4 ;
-(NSSet *)allowedClasses;
-(id)initialValue;
-(unsigned long long)kind;
-(NSString *)name;
-(void)setAllowedClasses:(NSSet *)arg1 ;
-(void)setKind:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setInitialValue:(id)arg1 ;
@end

