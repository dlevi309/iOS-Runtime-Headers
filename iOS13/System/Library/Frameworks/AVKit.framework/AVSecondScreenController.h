/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class AVObservationController, NSMutableOrderedSet;

@interface AVSecondScreenController : NSObject {

	BOOL _allowsUpdatingActiveConnection;
	AVObservationController* _observationController;
	NSMutableOrderedSet* _secondScreens;
	NSMutableOrderedSet* _connections;

}

@property (nonatomic,readonly) AVObservationController * observationController;              //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * secondScreens;                          //@synthesize secondScreens=_secondScreens - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * connections;                            //@synthesize connections=_connections - In the implementation block
@property (assign,nonatomic) BOOL allowsUpdatingActiveConnection;                            //@synthesize allowsUpdatingActiveConnection=_allowsUpdatingActiveConnection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)activeConnection;
-(id)_targetScreen;
-(NSMutableOrderedSet *)connections;
-(void)addConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(AVObservationController *)observationController;
-(id)addConnectionForPlayer:(id)arg1 playerLayer:(id)arg2 ;
-(id)connectionPassingTest:(/*^block*/id)arg1 ;
-(id)preferredConnection;
-(void)setPreferredConnection:(id)arg1 ;
-(void)addSecondScreen:(id)arg1 ;
-(void)removeSecondScreen:(id)arg1 ;
-(id)_connectionForPlayer:(id)arg1 ;
-(void)_updateActiveConnection;
-(void)_insertConnection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSMutableOrderedSet *)secondScreens;
-(BOOL)allowsUpdatingActiveConnection;
-(void)setAllowsUpdatingActiveConnection:(BOOL)arg1 ;
@end

