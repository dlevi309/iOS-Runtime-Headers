/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIMultilingualPreferenceProviding.h>

@class TIInputMode, NSArray, NSString;

@interface _TIMultilingualPreferences : NSObject <TIMultilingualPreferenceProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TIInputMode * preferredSecondaryInputMode; 
@property (nonatomic,readonly) NSArray * userEnabledInputModes; 
@property (nonatomic,readonly) NSArray * userPreferredLanguages; 
+(id)inputModesForIdentifiers:(id)arg1 ;
-(TIInputMode *)preferredSecondaryInputMode;
-(NSArray *)userEnabledInputModes;
-(NSArray *)userPreferredLanguages;
@end

