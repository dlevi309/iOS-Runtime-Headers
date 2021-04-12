/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSString, SGMicrodataItem;

@interface SGMicrodataItemProp : NSObject {

	NSString* _propertyName;
	NSString* _stringValue;
	SGMicrodataItem* _itemValue;

}

@property (nonatomic,readonly) NSString * propertyName;                  //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,readonly) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) SGMicrodataItem * itemValue;              //@synthesize itemValue=_itemValue - In the implementation block
-(NSString *)stringValue;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)propertyName;
-(SGMicrodataItem *)itemValue;
@end

