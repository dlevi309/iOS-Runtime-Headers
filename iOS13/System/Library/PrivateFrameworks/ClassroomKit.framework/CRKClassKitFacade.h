/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSString;


@protocol CRKClassKitFacade <NSObject>
@property (nonatomic,copy,readonly) NSString * currentUserDidChangeNotificationName; 
@property (nonatomic,copy,readonly) NSString * currentUserInfoKey; 
@required
-(void)currentUserWithCompletion:(/*^block*/id)arg1;
-(void)registerDataObserver:(id)arg1;
-(void)deregisterDataObserver:(id)arg1;
-(void)enrolledClassesWithCompletion:(/*^block*/id)arg1;
-(id)instructorObserverWithSortDescriptors:(id)arg1;
-(void)instructorsInClassWithID:(id)arg1 completion:(/*^block*/id)arg2;
-(id)classDataObserverWithSortDescriptors:(id)arg1;
-(id)currentUserDataObserverWithSortDescriptors:(id)arg1;
-(NSString *)currentUserDidChangeNotificationName;
-(NSString *)currentUserInfoKey;

@end

