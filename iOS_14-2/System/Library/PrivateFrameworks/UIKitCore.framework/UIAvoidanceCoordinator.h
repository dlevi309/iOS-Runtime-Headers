/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(CGRect)avoidanceFrame;
-(void)setGroupOfBlockades:(id)arg1 forBlockadeIdentifier:(id)arg2 ;
-(void)setAvoidanceFrame:(CGRect)arg1 ;
-(void)updateClients:(id)arg1 ;
-(id)findClientsForBlockade:(id)arg1 ;
-(id)findNamesForBlockade:(id)arg1 ;
-(id)findBlockadesForName:(id)arg1 ;
-(void)releaseAll:(id)arg1 withType:(unsigned long long)arg2 ;
-(void)removeAvoidanceObject:(id)arg1 ;
-(void)dealloc;
-(void)addAvoidanceObject:(id)arg1 ;
@end

