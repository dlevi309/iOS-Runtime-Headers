/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIViewLFLDChangeRecord.h>

@class NSString, NSValue, UIView;

@interface _UIViewLFLDGeometryChangeRecord : _UIViewLFLDChangeRecord {

	NSString* _geometricPropertyName;
	NSValue* _geometricPropertyValue;
	UIView* _currentLayoutView;
	NSString* _currentLayoutMethodName;

}

@property (nonatomic,readonly) NSString * geometricPropertyName;                //@synthesize geometricPropertyName=_geometricPropertyName - In the implementation block
@property (nonatomic,readonly) NSValue * geometricPropertyValue;                //@synthesize geometricPropertyValue=_geometricPropertyValue - In the implementation block
@property (nonatomic,readonly) UIView * currentLayoutView;                      //@synthesize currentLayoutView=_currentLayoutView - In the implementation block
@property (nonatomic,readonly) NSString * currentLayoutMethodName;              //@synthesize currentLayoutMethodName=_currentLayoutMethodName - In the implementation block
-(id)description;
-(id)initWithGeometricPropertyName:(id)arg1 value:(id)arg2 currentLayoutView:(id)arg3 methodName:(id)arg4 ;
-(NSString *)geometricPropertyName;
-(NSValue *)geometricPropertyValue;
-(UIView *)currentLayoutView;
-(NSString *)currentLayoutMethodName;
@end

