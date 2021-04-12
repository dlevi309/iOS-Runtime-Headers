/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate;

@interface VSSubscriptionFetchOptionDescription : NSObject <NSCopying> {

	BOOL _container;
	NSString* _key;
	id _defaultValue;
	unsigned long long _minCount;
	Class _allowedClass;
	NSPredicate* _allowedValuePredicate;

}

@property (nonatomic,copy) NSString * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id defaultValue;                                //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,getter=isContainer,nonatomic) BOOL container;              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) unsigned long long minCount;                    //@synthesize minCount=_minCount - In the implementation block
@property (nonatomic,retain) Class allowedClass;                             //@synthesize allowedClass=_allowedClass - In the implementation block
@property (nonatomic,copy) NSPredicate * allowedValuePredicate;              //@synthesize allowedValuePredicate=_allowedValuePredicate - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setContainer:(BOOL)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(unsigned long long)minCount;
-(void)setMinCount:(unsigned long long)arg1 ;
-(BOOL)isContainer;
-(Class)allowedClass;
-(void)setAllowedClass:(Class)arg1 ;
-(NSPredicate *)allowedValuePredicate;
-(void)setAllowedValuePredicate:(NSPredicate *)arg1 ;
@end

