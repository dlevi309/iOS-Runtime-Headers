/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class NSString;

@interface WBSAddressBookValueSpecifier : NSObject {

	NSString* _property;
	NSString* _component;
	NSString* _label;
	NSString* _category;
	NSString* _parentProperty;

}

@property (nonatomic,readonly) NSString * property;                    //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSString * component;                   //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * category;                    //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * parentProperty;              //@synthesize parentProperty=_parentProperty - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)category;
-(NSString *)label;
-(NSString *)property;
-(NSString *)component;
-(NSString *)parentProperty;
-(id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3 category:(id)arg4 parentProperty:(id)arg5 ;
-(id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3 ;
@end

