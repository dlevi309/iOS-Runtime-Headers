/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/


@class NSString;

@interface CoreDAVParseRule : NSObject {

	long long _minimumNumber;
	long long _maximumNumber;
	NSString* _nameSpace;
	NSString* _elementName;
	Class _objectClass;
	SEL _setterMethod;

}

@property (nonatomic,readonly) long long minimumNumber;              //@synthesize minimumNumber=_minimumNumber - In the implementation block
@property (nonatomic,readonly) long long maximumNumber;              //@synthesize maximumNumber=_maximumNumber - In the implementation block
@property (nonatomic,readonly) NSString * nameSpace;                 //@synthesize nameSpace=_nameSpace - In the implementation block
@property (nonatomic,readonly) NSString * elementName;               //@synthesize elementName=_elementName - In the implementation block
@property (nonatomic,readonly) Class objectClass;                    //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,readonly) SEL setterMethod;                     //@synthesize setterMethod=_setterMethod - In the implementation block
+(id)ruleWithMinimumNumber:(long long)arg1 maximumNumber:(long long)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 ;
-(NSString *)nameSpace;
-(NSString *)elementName;
-(id)description;
-(Class)objectClass;
-(id)initWithMinimumNumber:(long long)arg1 maximumNumber:(long long)arg2 nameSpace:(id)arg3 elementName:(id)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 ;
-(long long)minimumNumber;
-(long long)maximumNumber;
-(SEL)setterMethod;
@end

