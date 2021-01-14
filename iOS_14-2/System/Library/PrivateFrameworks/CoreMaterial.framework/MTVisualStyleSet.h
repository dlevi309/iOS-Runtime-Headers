/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/

#import <libobjc.A.dylib/MTVisualStyleSetProviding.h>

@class NSMutableDictionary, NSString;

@interface MTVisualStyleSet : NSObject <MTVisualStyleSetProviding> {

	NSMutableDictionary* _visualStylesToStyleNames;
	NSMutableDictionary* _styleNamesToVisualStylings;
	long long _visualStyleSetVersion;
	NSString* _visualStyleSetName;

}

@property (nonatomic,readonly) long long visualStyleSetVersion;                 //@synthesize visualStyleSetVersion=_visualStyleSetVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * visualStyleSetName;              //@synthesize visualStyleSetName=_visualStyleSetName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recipeNameForRecipeFromStyle:(id)arg1 fromStyleSetWithName:(id)arg2 ;
-(NSString *)visualStyleSetName;
-(id)visualStylingForStyle:(id)arg1 ;
-(NSString *)description;
-(long long)visualStyleSetVersion;
-(id)initWithName:(id)arg1 visualStyleSetDescription:(id)arg2 andDescendantDescriptions:(id)arg3 ;
-(id)_newMaterialSettingsForStyle:(id)arg1 ;
-(id)_materialDescriptionForStyle:(id)arg1 ;
@end

