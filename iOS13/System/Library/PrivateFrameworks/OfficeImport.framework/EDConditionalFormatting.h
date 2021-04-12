/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {

	NSMutableArray* mRules;
	EDReferenceCollection* mRanges;
	BOOL mApplyToDate;

}
+(id)conditionalFormatting;
-(id)init;
-(id)description;
-(unsigned long long)rangeCount;
-(id)rangeAtIndex:(unsigned long long)arg1 ;
-(id)rules;
-(void)addRange:(id)arg1 ;
-(void)addRule:(id)arg1 ;
-(id)ruleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ruleCount;
-(BOOL)isApplyToDate;
@end

