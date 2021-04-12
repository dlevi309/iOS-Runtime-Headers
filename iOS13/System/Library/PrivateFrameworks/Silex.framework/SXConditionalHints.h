/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXConditionalHints.h>

@protocol SXConditionalHints <NSObject>
@property (nonatomic,readonly) BOOL autoplacement; 
@property (nonatomic,readonly) BOOL components; 
@property (nonatomic,readonly) BOOL componentLayouts; 
@property (nonatomic,readonly) BOOL componentStyles; 
@property (nonatomic,readonly) BOOL componentTextStyles; 
@property (nonatomic,readonly) BOOL documentStyle; 
@property (nonatomic,readonly) BOOL textStyles; 
@required
-(BOOL)components;
-(BOOL)documentStyle;
-(BOOL)componentLayouts;
-(BOOL)componentStyles;
-(BOOL)textStyles;
-(BOOL)componentTextStyles;
-(BOOL)autoplacement;

@end


@class NSString;

@interface SXConditionalHints : SXJSONObject <SXConditionalHints>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL autoplacement; 
@property (nonatomic,readonly) BOOL components; 
@property (nonatomic,readonly) BOOL componentLayouts; 
@property (nonatomic,readonly) BOOL componentStyles; 
@property (nonatomic,readonly) BOOL componentTextStyles; 
@property (nonatomic,readonly) BOOL documentStyle; 
@property (nonatomic,readonly) BOOL textStyles; 
-(BOOL)textStyles;
-(BOOL)documentStyle;
-(BOOL)componentTextStyles;
-(BOOL)componentStyles;
-(BOOL)componentLayouts;
-(BOOL)components;
-(BOOL)autoplacement;
-(BOOL)BOOLValueForJSONValue:(id)arg1 type:(int)arg2 ;
-(BOOL)autoplacementWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)componentsWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)componentLayoutsWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)componentStylesWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)componentTextStylesWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)documentStyleWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)textStylesWithValue:(id)arg1 withType:(int)arg2 ;
@end

