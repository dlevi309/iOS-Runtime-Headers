/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKClassroomLockScreenMonitoring.h>

@class NSString;

@interface CRKClassroomLockScreenMonitor_iOS : NSObject <CRKClassroomLockScreenMonitoring> {

	int mDidAppearObserver;
	int mDidDismissObserver;
	BOOL _classroomLockScreenVisible;

}

@property (assign,getter=isClassroomLockScreenVisible,nonatomic) BOOL classroomLockScreenVisible;              //@synthesize classroomLockScreenVisible=_classroomLockScreenVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(void)startObserving;
-(void)endObserving;
-(void)setClassroomLockScreenVisible:(BOOL)arg1 ;
-(void)displayClassroomLockScreenWithLabel:(id)arg1 passcode:(id)arg2 ;
-(void)dismissClassroomLockScreen;
-(BOOL)isClassroomLockScreenVisible;
@end

