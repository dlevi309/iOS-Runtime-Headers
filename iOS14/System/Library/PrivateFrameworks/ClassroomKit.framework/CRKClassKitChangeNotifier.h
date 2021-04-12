/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKClassKitChangeNotifierDelegate, CRKClassKitRosterRequirements;
@class NSObject;

@interface CRKClassKitChangeNotifier : NSObject {

	id<CRKClassKitChangeNotifierDelegate> _delegate;
	NSObject*<CRKClassKitRosterRequirements> _requirements;
	id _observerToken;

}

@property (nonatomic,readonly) NSObject*<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
@property (nonatomic,retain) id observerToken;                                                     //@synthesize observerToken=_observerToken - In the implementation block
@property (assign,nonatomic,__weak) id<CRKClassKitChangeNotifierDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(id)observerToken;
-(id<CRKClassKitChangeNotifierDelegate>)delegate;
-(void)setDelegate:(id<CRKClassKitChangeNotifierDelegate>)arg1 ;
-(NSObject*<CRKClassKitRosterRequirements>)requirements;
-(void)dataChanged;
-(void)setObserverToken:(id)arg1 ;
-(id)initWithRequirements:(id)arg1 ;
-(void)dealloc;
-(void)stopObservingRequirements;
-(void)startObservingRequirements;
@end

