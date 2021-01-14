/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class NSDictionary;

@interface ASParseRule : NSObject {

	int _minimumNumber;
	int _maximumNumber;
	int _codePage;
	int _token;
	Class _objectClass;
	SEL _setterMethod;
	long long _dataclass;
	NSDictionary* _subclassRuleSet;
	NSDictionary* _callbackDict;
	NSDictionary* _streamCallbackDict;

}
-(long long)dataclass;
-(Class)objectClass;
-(int)token;
-(int)minimumNumber;
-(int)maximumNumber;
-(SEL)setterMethod;
-(int)codePage;
-(id)initWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 codePage:(int)arg3 token:(int)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 dataclass:(long long)arg7 callbackDict:(id)arg8 streamCallbackDict:(id)arg9 subclassRuleSet:(id)arg10 ;
-(id)subclassRuleSet;
-(id)callbackDict;
-(id)streamCallbackDict;
@end

