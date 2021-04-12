/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXCondition.h>
@class NSString;


@protocol SXCondition <NSObject>
@property (nonatomic,readonly) double minViewportWidth; 
@property (nonatomic,readonly) double maxViewportWidth; 
@property (nonatomic,readonly) double minViewportAspectRatio; 
@property (nonatomic,readonly) double maxViewportAspectRatio; 
@property (nonatomic,readonly) NSString * minContentSizeCategory; 
@property (nonatomic,readonly) NSString * maxContentSizeCategory; 
@property (nonatomic,readonly) unsigned long long minColumns; 
@property (nonatomic,readonly) unsigned long long maxColumns; 
@property (nonatomic,readonly) NSString * platform; 
@property (nonatomic,readonly) NSString * viewLocation; 
@property (nonatomic,readonly) NSString * minSpecVersion; 
@property (nonatomic,readonly) NSString * maxSpecVersion; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,readonly) NSString * subscriptionStatus; 
@property (nonatomic,readonly) unsigned long long testing; 
@property (nonatomic,readonly) unsigned long long preferredColorScheme; 
@required
-(NSString *)platform;
-(long long)verticalSizeClass;
-(long long)horizontalSizeClass;
-(NSString *)subscriptionStatus;
-(unsigned long long)testing;
-(NSString *)maxContentSizeCategory;
-(unsigned long long)maxColumns;
-(unsigned long long)preferredColorScheme;
-(NSString *)viewLocation;
-(NSString *)minContentSizeCategory;
-(double)minViewportWidth;
-(double)maxViewportWidth;
-(double)minViewportAspectRatio;
-(double)maxViewportAspectRatio;
-(unsigned long long)minColumns;
-(NSString *)minSpecVersion;
-(NSString *)maxSpecVersion;

@end


@class NSString;

@interface SXCondition : SXJSONObject <SXCondition>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double minViewportWidth; 
@property (nonatomic,readonly) double maxViewportWidth; 
@property (nonatomic,readonly) double minViewportAspectRatio; 
@property (nonatomic,readonly) double maxViewportAspectRatio; 
@property (nonatomic,readonly) NSString * minContentSizeCategory; 
@property (nonatomic,readonly) NSString * maxContentSizeCategory; 
@property (nonatomic,readonly) unsigned long long minColumns; 
@property (nonatomic,readonly) unsigned long long maxColumns; 
@property (nonatomic,readonly) NSString * platform; 
@property (nonatomic,readonly) NSString * viewLocation; 
@property (nonatomic,readonly) NSString * minSpecVersion; 
@property (nonatomic,readonly) NSString * maxSpecVersion; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,readonly) NSString * subscriptionStatus; 
@property (nonatomic,readonly) unsigned long long testing; 
@property (nonatomic,readonly) unsigned long long preferredColorScheme; 
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
-(unsigned long long)preferredColorScheme;
-(unsigned long long)testing;
-(NSString *)subscriptionStatus;
-(long long)verticalSizeClass;
-(long long)horizontalSizeClass;
-(NSString *)maxSpecVersion;
-(NSString *)minSpecVersion;
-(NSString *)viewLocation;
-(NSString *)platform;
-(unsigned long long)maxColumns;
-(unsigned long long)minColumns;
-(NSString *)maxContentSizeCategory;
-(NSString *)minContentSizeCategory;
-(double)maxViewportAspectRatio;
-(double)minViewportAspectRatio;
-(double)maxViewportWidth;
-(double)minViewportWidth;
-(double)minViewportWidthWithValue:(id)arg1 withType:(int)arg2 ;
-(double)maxViewportWidthWithValue:(id)arg1 withType:(int)arg2 ;
-(double)minViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2 ;
-(double)maxViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2 ;
-(id)minContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2 ;
-(id)maxContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)horizontalSizeClassWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)verticalSizeClassWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)testingWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)preferredColorSchemeWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)interfaceSizeClassFromJSONSizeClass:(id)arg1 ;
-(id)contentSizeCategoryFromJSONContentSizeCategory:(id)arg1 ;
@end

