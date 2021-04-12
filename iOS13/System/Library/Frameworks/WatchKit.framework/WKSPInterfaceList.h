/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WKSPInterfaceObject.h>

@class NSArray, NSDictionary, WKInterfaceController;

@interface WKSPInterfaceList : WKSPInterfaceObject {

	NSArray* _rowControllers;
	NSDictionary* _rowDescriptions;
	WKInterfaceController* _controller;
	NSArray* _rowControllerProperties;

}

@property (nonatomic,copy) NSArray * rowControllers;                                 //@synthesize rowControllers=_rowControllers - In the implementation block
@property (nonatomic,copy) NSDictionary * rowDescriptions;                           //@synthesize rowDescriptions=_rowDescriptions - In the implementation block
@property (assign,nonatomic,__weak) WKInterfaceController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSArray * rowControllerProperties;                      //@synthesize rowControllerProperties=_rowControllerProperties - In the implementation block
@property (nonatomic,readonly) long long numberOfRows; 
-(long long)numberOfRows;
-(void)setController:(WKInterfaceController *)arg1 ;
-(WKInterfaceController *)controller;
-(void)_setupWithDescription:(id)arg1 forController:(id)arg2 ;
-(id)rowControllerAtIndex:(long long)arg1 ;
-(void)setRowDescriptions:(NSDictionary *)arg1 ;
-(void)setRowTypes:(id)arg1 ;
-(NSDictionary *)rowDescriptions;
-(void)setRowControllers:(NSArray *)arg1 ;
-(void)setRowControllerProperties:(NSArray *)arg1 ;
-(NSArray *)rowControllers;
-(void)setNumberOfRows:(long long)arg1 withRowType:(id)arg2 ;
-(NSArray *)rowControllerProperties;
@end

