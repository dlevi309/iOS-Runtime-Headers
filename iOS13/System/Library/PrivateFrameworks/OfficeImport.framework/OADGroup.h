/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDrawable.h>
#import <libobjc.A.dylib/OADDrawableContainer.h>

@class NSMutableArray, NSString;

@interface OADGroup : OADDrawable <OADDrawableContainer> {

	CGRect mLogicalBounds;
	NSMutableArray* mChildren;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)addChild:(id)arg1 ;
-(id)children;
-(void)removeChild:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)childCount;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(CGRect)logicalBounds;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(id)groupProperties;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
@end

