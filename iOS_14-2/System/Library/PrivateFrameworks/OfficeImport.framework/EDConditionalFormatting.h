/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {

	NSMutableArray* mRules;
	EDReferenceCollection* mRanges;
	BOOL mApplyToDate;

}
+(id)conditionalFormatting;
-(unsigned long long)rangeCount;
-(id)init;
-(id)description;
-(void)addRange:(id)arg1 ;
-(id)rangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ruleCount;
-(id)rules;
-(void)addRule:(id)arg1 ;
-(id)ruleAtIndex:(unsigned long long)arg1 ;
-(BOOL)isApplyToDate;
@end

