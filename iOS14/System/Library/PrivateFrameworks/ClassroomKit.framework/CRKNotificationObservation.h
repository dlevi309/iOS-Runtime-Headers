/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKObservation.h>

@class NSString, NSNotificationCenter, NSObject;

@interface CRKNotificationObservation : NSObject <CRKObservation> {

	NSString* _notificationName;
	NSNotificationCenter* _notificationCenter;
	NSObject* _object;
	/*^block*/id _notificationHandler;

}

@property (nonatomic,copy,readonly) NSString * notificationName;                       //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) NSObject * object;                                        //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) id notificationHandler;                                     //@synthesize notificationHandler=_notificationHandler - In the implementation block
+(id)observationWithNotificationCenter:(id)arg1 notificationName:(id)arg2 object:(id)arg3 notificationHandler:(/*^block*/id)arg4 ;
-(NSNotificationCenter *)notificationCenter;
-(void)beginObserving;
-(NSObject *)object;
-(void)setObject:(NSObject *)arg1 ;
-(void)setNotificationHandler:(id)arg1 ;
-(id)notificationHandler;
-(void)endObserving;
-(void)invalidate;
-(NSString *)notificationName;
-(void)dealloc;
-(void)notificationDidFire:(id)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 notificationName:(id)arg2 object:(id)arg3 notificationHandler:(/*^block*/id)arg4 ;
@end

