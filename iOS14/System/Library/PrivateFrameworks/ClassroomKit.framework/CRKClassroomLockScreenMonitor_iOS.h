/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)startObserving;
-(id)init;
-(void)endObserving;
-(void)dealloc;
-(void)setClassroomLockScreenVisible:(BOOL)arg1 ;
-(void)displayClassroomLockScreenWithLabel:(id)arg1 passcode:(id)arg2 ;
-(void)dismissClassroomLockScreen;
-(BOOL)isClassroomLockScreenVisible;
@end

