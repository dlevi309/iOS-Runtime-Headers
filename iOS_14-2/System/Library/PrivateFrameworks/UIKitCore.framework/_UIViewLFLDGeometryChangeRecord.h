/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)geometricPropertyName;
-(NSValue *)geometricPropertyValue;
-(id)initWithGeometricPropertyName:(id)arg1 value:(id)arg2 currentLayoutView:(id)arg3 methodName:(id)arg4 ;
-(UIView *)currentLayoutView;
-(NSString *)currentLayoutMethodName;
-(id)description;
@end

