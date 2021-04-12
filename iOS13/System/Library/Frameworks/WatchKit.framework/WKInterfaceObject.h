/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@class NSString;

@interface WKInterfaceObject : NSObject {

	NSString* _interfaceProperty;
	NSString* _viewControllerID;
	NSString* _propertyIndex;
	long long _tableIndex;
	long long _rowIndex;

}

@property (nonatomic,copy) NSString * interfaceProperty;              //@synthesize interfaceProperty=_interfaceProperty - In the implementation block
@property (nonatomic,copy) NSString * viewControllerID;               //@synthesize viewControllerID=_viewControllerID - In the implementation block
@property (nonatomic,retain) NSString * propertyIndex;                //@synthesize propertyIndex=_propertyIndex - In the implementation block
@property (assign,nonatomic) long long tableIndex;                    //@synthesize tableIndex=_tableIndex - In the implementation block
@property (assign,nonatomic) long long rowIndex;                      //@synthesize rowIndex=_rowIndex - In the implementation block
-(id)init;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setRotation:(double)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setAccessibilityIdentifier:(id)arg1 ;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setAccessibilityValue:(id)arg1 ;
-(void)setAccessibilityHint:(id)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(long long)rowIndex;
-(void)setRowIndex:(long long)arg1 ;
-(void)setInterfaceProperty:(NSString *)arg1 ;
-(void)setViewControllerID:(NSString *)arg1 ;
-(void)setPropertyIndex:(NSString *)arg1 ;
-(void)setTableIndex:(long long)arg1 ;
-(void)_sendValueChanged:(id)arg1 forProperty:(id)arg2 ;
-(NSString *)propertyIndex;
-(long long)tableIndex;
-(NSString *)viewControllerID;
-(id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5 ;
-(void)_setupWithDescription:(id)arg1 forController:(id)arg2 ;
-(void)didRegisterWithRemoteInterface;
-(void)_setImage:(id)arg1 forProperty:(id)arg2 ;
-(void)_setImageData:(id)arg1 forProperty:(id)arg2 ;
-(void)_setImageNamed:(id)arg1 forProperty:(id)arg2 ;
-(void)_sendValueChanged:(id)arg1 ;
-(void)setRelativeWidth:(double)arg1 withAdjustment:(double)arg2 ;
-(void)setRelativeHeight:(double)arg1 withAdjustment:(double)arg2 ;
-(void)sizeToFitWidth;
-(void)sizeToFitHeight;
-(NSString *)interfaceProperty;
-(void)setAccessibilityImageRegions:(id)arg1 ;
@end

