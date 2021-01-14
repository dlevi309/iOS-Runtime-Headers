/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/


@class NSString, TIAnalyticsFieldSpec;

@interface FieldSpecTuple : NSObject {

	NSString* _key;
	TIAnalyticsFieldSpec* _fieldSpec;

}

@property (nonatomic,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) TIAnalyticsFieldSpec * fieldSpec;              //@synthesize fieldSpec=_fieldSpec - In the implementation block
+(id)tupleWithKey:(id)arg1 eventSpec:(id)arg2 ;
-(TIAnalyticsFieldSpec *)fieldSpec;
-(NSString *)key;
@end

