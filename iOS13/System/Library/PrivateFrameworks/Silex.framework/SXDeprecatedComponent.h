/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSString, SXComponentClassification;

@interface SXDeprecatedComponent : NSObject {

	NSString* _typeString;
	SXComponentClassification* _replacementClassification;

}

@property (nonatomic,readonly) NSString * typeString;                                              //@synthesize typeString=_typeString - In the implementation block
@property (nonatomic,readonly) SXComponentClassification * replacementClassification;              //@synthesize replacementClassification=_replacementClassification - In the implementation block
+(id)deprecatedComponentWithType:(id)arg1 withReplacementClassificationClass:(Class)arg2 ;
-(NSString *)typeString;
-(SXComponentClassification *)replacementClassification;
-(id)initWithType:(id)arg1 withReplacementClassification:(Class)arg2 ;
@end

