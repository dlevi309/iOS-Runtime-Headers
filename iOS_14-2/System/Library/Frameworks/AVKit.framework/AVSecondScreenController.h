/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)activeConnection;
-(NSMutableOrderedSet *)connections;
-(void)removeConnection:(id)arg1 ;
-(id)addConnectionForPlayer:(id)arg1 playerLayer:(id)arg2 ;
-(id)connectionPassingTest:(/*^block*/id)arg1 ;
-(id)preferredConnection;
-(void)setPreferredConnection:(id)arg1 ;
-(void)addSecondScreen:(id)arg1 ;
-(void)removeSecondScreen:(id)arg1 ;
-(NSMutableOrderedSet *)secondScreens;
-(id)_connectionForPlayer:(id)arg1 ;
-(void)_updateActiveConnection;
-(void)_insertConnection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)allowsUpdatingActiveConnection;
-(void)setAllowsUpdatingActiveConnection:(BOOL)arg1 ;
-(id)_targetScreen;
-(void)addConnection:(id)arg1 ;
-(AVObservationController *)observationController;
-(void)dealloc;
@end

