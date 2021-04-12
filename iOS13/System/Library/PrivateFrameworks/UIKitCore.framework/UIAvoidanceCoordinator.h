/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface UIAvoidanceCoordinator : NSObject {

	NSMutableDictionary* _blockades;
	NSMutableSet* _clients;
	int _recurseCount;
	CGRect _avoidanceFrame;

}

@property (assign,nonatomic) CGRect avoidanceFrame;              //@synthesize avoidanceFrame=_avoidanceFrame - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGRect)avoidanceFrame;
-(void)releaseAll:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)findClientsForBlockade:(id)arg1 ;
-(void)updateClients:(id)arg1 ;
-(id)findNamesForBlockade:(id)arg1 ;
-(id)findBlockadesForName:(id)arg1 ;
-(void)setGroupOfBlockades:(id)arg1 forBlockadeIdentifier:(id)arg2 ;
-(void)addAvoidanceObject:(id)arg1 ;
-(void)removeAvoidanceObject:(id)arg1 ;
-(void)setAvoidanceFrame:(CGRect)arg1 ;
@end

