/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@class NSString;

@interface WKSPInterfaceObject : NSObject {

	NSString* _interfaceProperty;
	NSString* _viewControllerID;
	NSString* _propertyIndex;
	long long _tableIndex;
	long long _rowIndex;

}

@property (nonatomic,copy) NSString * interfaceProperty;              //@synthesize interfaceProperty=_interfaceProperty - In the implementation block
@property (nonatomic,copy) NSString * viewControllerID;               //@synthesize viewControllerID=_viewControllerID - In the implementation block
@property (nonatomic,copy) NSString * propertyIndex;                  //@synthesize propertyIndex=_propertyIndex - In the implementation block
@property (assign,nonatomic) long long tableIndex;                    //@synthesize tableIndex=_tableIndex - In the implementation block
@property (assign,nonatomic) long long rowIndex;                      //@synthesize rowIndex=_rowIndex - In the implementation block
-(id)init;
-(void)setRowIndex:(long long)arg1 ;
-(long long)rowIndex;
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
-(void)_sendValueChanged:(id)arg1 ;
-(NSString *)interfaceProperty;
@end

