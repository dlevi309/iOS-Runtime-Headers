/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long visualStyleSetVersion;                 //@synthesize visualStyleSetVersion=_visualStyleSetVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * visualStyleSetName;              //@synthesize visualStyleSetName=_visualStyleSetName - In the implementation block
-(NSString *)description;
-(NSString *)visualStyleSetName;
-(id)initWithName:(id)arg1 visualStyleSetDescription:(id)arg2 andDescendantDescriptions:(id)arg3 ;
-(long long)visualStyleSetVersion;
-(id)visualStylingForStyle:(id)arg1 ;
@end

