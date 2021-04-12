/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/PKTextInputDebugStateReporting.h>

@class NSMutableArray, NSArray, NSString;

@interface PKTextInputDebugLogController : NSObject <PKTextInputDebugStateReporting> {

	NSMutableArray* __logEntries;

}

@property (nonatomic,readonly) NSMutableArray * _logEntries;              //@synthesize _logEntries=__logEntries - In the implementation block
@property (nonatomic,readonly) NSArray * currentLogEntries; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)_isLoggingEnabled;
-(void)reportDebugStateDescription:(/*^block*/id)arg1 ;
-(BOOL)debugStateCanDisplayDetails;
-(id)debugStateDetailViewController;
-(NSMutableArray *)_logEntries;
-(void)_purgeOldLogEntries;
-(id)sharpenerLogWithCurrentContent;
-(NSArray *)currentLogEntries;
-(void)logEntryForAppliedResult:(id)arg1 ;
@end

