/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSWPChangeSessionManager.h>

@class TSWPChangeSession;

@interface TSWPTestChangeSessionManager : NSObject <TSWPChangeSessionManager> {

	TSWPChangeSession* _currentSession;

}

@property (nonatomic,readonly) BOOL isTrackingChanges; 
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(id)changeSessionAuthorCreatedWithCommand:(id*)arg1 ;
-(void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(id*)arg1 ;
-(BOOL)isTrackingChanges;
@end

