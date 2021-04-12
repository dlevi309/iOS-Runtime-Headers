/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXConditionHints.h>

@protocol SXConditionHints <NSObject>
@property (nonatomic,readonly) BOOL minViewportWidth; 
@property (nonatomic,readonly) BOOL maxViewportWidth; 
@property (nonatomic,readonly) BOOL minViewportAspectRatio; 
@property (nonatomic,readonly) BOOL maxViewportAspectRatio; 
@property (nonatomic,readonly) BOOL minContentSizeCategory; 
@property (nonatomic,readonly) BOOL maxContentSizeCategory; 
@property (nonatomic,readonly) BOOL minColumns; 
@property (nonatomic,readonly) BOOL maxColumns; 
@property (nonatomic,readonly) BOOL platform; 
@property (nonatomic,readonly) BOOL viewLocation; 
@property (nonatomic,readonly) BOOL minSpecVersion; 
@property (nonatomic,readonly) BOOL maxSpecVersion; 
@property (nonatomic,readonly) BOOL horizontalSizeClass; 
@property (nonatomic,readonly) BOOL verticalSizeClass; 
@property (nonatomic,readonly) BOOL subscriptionStatus; 
@property (nonatomic,readonly) BOOL testing; 
@property (nonatomic,readonly) BOOL preferredColorScheme; 
@required
-(BOOL)platform;
-(BOOL)verticalSizeClass;
-(BOOL)horizontalSizeClass;
-(BOOL)subscriptionStatus;
-(BOOL)testing;
-(BOOL)maxContentSizeCategory;
-(BOOL)maxColumns;
-(BOOL)preferredColorScheme;
-(BOOL)viewLocation;
-(BOOL)minContentSizeCategory;
-(BOOL)minViewportWidth;
-(BOOL)maxViewportWidth;
-(BOOL)minViewportAspectRatio;
-(BOOL)maxViewportAspectRatio;
-(BOOL)minColumns;
-(BOOL)minSpecVersion;
-(BOOL)maxSpecVersion;

@end


@class NSString;

@interface SXConditionHints : SXJSONObject <SXConditionHints>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL minViewportWidth; 
@property (nonatomic,readonly) BOOL maxViewportWidth; 
@property (nonatomic,readonly) BOOL minViewportAspectRatio; 
@property (nonatomic,readonly) BOOL maxViewportAspectRatio; 
@property (nonatomic,readonly) BOOL minContentSizeCategory; 
@property (nonatomic,readonly) BOOL maxContentSizeCategory; 
@property (nonatomic,readonly) BOOL minColumns; 
@property (nonatomic,readonly) BOOL maxColumns; 
@property (nonatomic,readonly) BOOL platform; 
@property (nonatomic,readonly) BOOL viewLocation; 
@property (nonatomic,readonly) BOOL minSpecVersion; 
@property (nonatomic,readonly) BOOL maxSpecVersion; 
@property (nonatomic,readonly) BOOL horizontalSizeClass; 
@property (nonatomic,readonly) BOOL verticalSizeClass; 
@property (nonatomic,readonly) BOOL subscriptionStatus; 
@property (nonatomic,readonly) BOOL testing; 
@property (nonatomic,readonly) BOOL preferredColorScheme; 
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
-(BOOL)preferredColorScheme;
-(BOOL)testing;
-(BOOL)subscriptionStatus;
-(BOOL)verticalSizeClass;
-(BOOL)horizontalSizeClass;
-(BOOL)maxSpecVersion;
-(BOOL)minSpecVersion;
-(BOOL)viewLocation;
-(BOOL)platform;
-(BOOL)maxColumns;
-(BOOL)minColumns;
-(BOOL)maxContentSizeCategory;
-(BOOL)minContentSizeCategory;
-(BOOL)maxViewportAspectRatio;
-(BOOL)minViewportAspectRatio;
-(BOOL)maxViewportWidth;
-(BOOL)minViewportWidth;
-(BOOL)BOOLValueForJSONValue:(id)arg1 type:(int)arg2 ;
-(BOOL)minViewportWidthWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)maxViewportWidthWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)minViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)maxViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)minContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)maxContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)minColumnsWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)maxColumnsWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)platformWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)viewLocationWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)minSpecVersionWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)maxSpecVersionWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)horizontalSizeClassWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)verticalSizeClassWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)subscriptionStatusWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)testingWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)preferredColorSchemeWithValue:(id)arg1 withType:(int)arg2 ;
@end

