/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIMultilingualPreferenceProviding.h>

@class TIInputMode, NSArray, NSString;

@interface _TIMultilingualPreferences : NSObject <TIMultilingualPreferenceProviding>

@property (nonatomic,readonly) TIInputMode * preferredSecondaryInputMode; 
@property (nonatomic,readonly) NSArray * userEnabledInputModes; 
@property (nonatomic,readonly) NSArray * userPreferredLanguages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inputModesForIdentifiers:(id)arg1 ;
-(TIInputMode *)preferredSecondaryInputMode;
-(NSArray *)userEnabledInputModes;
-(NSArray *)userPreferredLanguages;
@end

