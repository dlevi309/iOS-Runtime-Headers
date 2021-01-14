/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADTableStyleResolver.h>

@class OADTextListStyle;

@interface OADTableUnnecessaryOverrideRemover : OADTableStyleResolver {

	OADTextListStyle* _parentTextListStyle;

}

@property (nonatomic,readonly) OADTextListStyle * parentTextListStyle;              //@synthesize parentTextListStyle=_parentTextListStyle - In the implementation block
-(void)applyTextStyle:(id)arg1 toParagraph:(id)arg2 ;
-(void)applyResolvedPartStyle:(id)arg1 leftStroke:(id)arg2 rightStroke:(id)arg3 topStroke:(id)arg4 bottomStroke:(id)arg5 toCell:(id)arg6 ;
-(void)fixFill:(id)arg1 ;
-(void)applyTextBodyPropertiesToCellPropertiesInCell:(id)arg1 ;
-(void)removeUnnecessaryOverridesInCellProperties:(id)arg1 strokeType:(int)arg2 resolvedStroke:(id)arg3 ;
-(OADTextListStyle *)parentTextListStyle;
-(id)initWithTable:(id)arg1 parentTextListStyle:(id)arg2 ;
@end

