/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)children;
-(void)addChildren:(id)arg1 ;
-(id)init;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(void)addChild:(id)arg1 ;
-(unsigned long long)childCount;
-(NSString *)description;
-(void)removeChild:(id)arg1 ;
-(CGRect)logicalBounds;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(id)groupProperties;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
@end

