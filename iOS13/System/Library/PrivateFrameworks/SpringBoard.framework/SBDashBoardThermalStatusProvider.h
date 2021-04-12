/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSThermalStatusProviding.h>

@class SBThermalController, NSString;

@interface SBDashBoardThermalStatusProvider : NSObject <CSThermalStatusProviding> {

	SBThermalController* _thermalController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long thermalStatus; 
-(id)init;
-(long long)thermalStatus;
-(id)initWithThermalController:(id)arg1 ;
@end

