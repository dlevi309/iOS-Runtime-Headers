/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WKInterfaceObject.h>

@class NSDictionary, NSMutableArray, WKInterfaceController;

@interface WKInterfaceTable : WKInterfaceObject {

	NSDictionary* _rowDescriptions;
	NSMutableArray* _rowControllers;
	NSMutableArray* _rowControllerProperties;
	WKInterfaceController* _controller;

}

@property (nonatomic,copy) NSDictionary * rowDescriptions;                           //@synthesize rowDescriptions=_rowDescriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * rowControllers;                        //@synthesize rowControllers=_rowControllers - In the implementation block
@property (nonatomic,retain) NSMutableArray * rowControllerProperties;               //@synthesize rowControllerProperties=_rowControllerProperties - In the implementation block
@property (assign,nonatomic,__weak) WKInterfaceController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) long long numberOfRows; 
-(long long)numberOfRows;
-(void)setController:(WKInterfaceController *)arg1 ;
-(WKInterfaceController *)controller;
-(void)_setupWithDescription:(id)arg1 forController:(id)arg2 ;
-(id)rowControllerAtIndex:(long long)arg1 ;
-(void)setRowDescriptions:(NSDictionary *)arg1 ;
-(void)setRowTypes:(id)arg1 ;
-(NSDictionary *)rowDescriptions;
-(void)setRowControllers:(NSMutableArray *)arg1 ;
-(void)setRowControllerProperties:(NSMutableArray *)arg1 ;
-(NSMutableArray *)rowControllers;
-(void)setNumberOfRows:(long long)arg1 withRowType:(id)arg2 ;
-(NSMutableArray *)rowControllerProperties;
-(void)_getRowControllers:(id)arg1 rowControllerProperties:(id)arg2 forRowTypes:(id)arg3 ;
-(void)resequenceRowControllerPropertyIndexes;
-(void)insertRowsAtIndexes:(id)arg1 withRowType:(id)arg2 ;
-(void)removeRowsAtIndexes:(id)arg1 ;
-(void)performSegueForRow:(long long)arg1 ;
-(void)scrollToRowAtIndex:(long long)arg1 ;
@end

