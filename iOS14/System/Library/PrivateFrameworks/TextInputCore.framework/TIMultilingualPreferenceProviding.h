/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

@class TIInputMode, NSArray;


@protocol TIMultilingualPreferenceProviding <NSObject>
@property (nonatomic,readonly) TIInputMode * preferredSecondaryInputMode; 
@property (nonatomic,readonly) NSArray * userEnabledInputModes; 
@property (nonatomic,readonly) NSArray * userPreferredLanguages; 
@required
-(TIInputMode *)preferredSecondaryInputMode;
-(NSArray *)userEnabledInputModes;
-(NSArray *)userPreferredLanguages;

@end

