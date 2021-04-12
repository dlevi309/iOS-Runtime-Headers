/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDarkModePolicyException.h>

@class SXJSONObjectMerger, NSString;

@interface SXTextContrastDarkModePolicyException : NSObject <SXDarkModePolicyException> {

	SXJSONObjectMerger* _componentStyleMerger;
	SXJSONObjectMerger* _componentTextStyleMerger;

}

@property (nonatomic,readonly) SXJSONObjectMerger * componentStyleMerger;                  //@synthesize componentStyleMerger=_componentStyleMerger - In the implementation block
@property (nonatomic,readonly) SXJSONObjectMerger * componentTextStyleMerger;              //@synthesize componentTextStyleMerger=_componentTextStyleMerger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXJSONObjectMerger *)componentTextStyleMerger;
-(SXJSONObjectMerger *)componentStyleMerger;
-(long long)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg1 DOM:(id)arg2 ;
-(long long)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg1 DOM:(id)arg2 ;
-(id)initWithComponentStyleMerger:(id)arg1 componentTextStyleMerger:(id)arg2 ;
-(id)opaqueComponentStyleForComponent:(id)arg1 DOM:(id)arg2 ;
-(id)componentTextStyleForTextComponent:(id)arg1 DOM:(id)arg2 ;
-(id)componentTextStyleForButtonComponent:(id)arg1 DOM:(id)arg2 ;
-(id)componentStyleForComponent:(id)arg1 DOM:(id)arg2 ;
-(id)mergedComponentTextStyleWithIdentifiers:(id)arg1 DOM:(id)arg2 ;
@end

