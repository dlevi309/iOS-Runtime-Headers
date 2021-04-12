/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSThermalStatusProviding.h>

@class SBThermalController, NSString;

@interface SBDashBoardThermalStatusProvider : NSObject <CSThermalStatusProviding> {

	SBThermalController* _thermalController;

}

@property (nonatomic,readonly) long long thermalStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithThermalController:(id)arg1 ;
-(long long)thermalStatus;
@end

