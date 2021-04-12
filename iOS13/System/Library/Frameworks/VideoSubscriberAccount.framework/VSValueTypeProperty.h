/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSSet *)allowedClasses;
-(void)setAllowedClasses:(NSSet *)arg1 ;
-(unsigned long long)kind;
-(void)setKind:(unsigned long long)arg1 ;
-(id)initialValue;
-(void)setInitialValue:(id)arg1 ;
@end

