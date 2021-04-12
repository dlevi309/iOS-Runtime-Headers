/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXDebugValue.h>

@class NSString;

@interface PXDebugStringValue : PXDebugValue {

	unsigned long long _highlightStyle;
	NSString* _string;

}

@property (nonatomic,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
-(id)initWithLabel:(id)arg1 string:(id)arg2 highlightStyle:(unsigned long long)arg3 ;
-(id)initWithLabel:(id)arg1 integerValue:(long long)arg2 ;
-(id)initWithLabel:(id)arg1 boolValue:(BOOL)arg2 positiveValue:(BOOL)arg3 positiveHighlighted:(BOOL)arg4 negativeHighlighted:(BOOL)arg5 ;
-(id)initWithLabel:(id)arg1 doubleValue:(double)arg2 ;
-(id)initWithLabel:(id)arg1 highlightedScore:(double)arg2 ;
-(NSString *)string;
-(unsigned long long)highlightStyle;
@end

