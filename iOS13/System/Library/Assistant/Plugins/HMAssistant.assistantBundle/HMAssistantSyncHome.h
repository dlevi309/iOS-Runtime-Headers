/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/HMAssistant.assistantBundle/HMAssistant
*/

#import <libobjc.A.dylib/AFSyncHandler.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSString, NSObject;

@interface HMAssistantSyncHome : NSObject <AFSyncHandler> {

	BOOL _done;
	NSMutableArray* _anchors;
	NSMutableArray* _entities;
	NSString* _finalAnchor;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * anchors;                        //@synthesize anchors=_anchors - In the implementation block
@property (nonatomic,retain) NSMutableArray * entities;                       //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) NSString * finalAnchor;                          //@synthesize finalAnchor=_finalAnchor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL done;                                       //@synthesize done=_done - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableArray *)entities;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(void)setEntities:(NSMutableArray *)arg1 ;
-(NSMutableArray *)anchors;
-(void)setAnchors:(NSMutableArray *)arg1 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 ;
-(id)currentSyncSnapshot;
-(BOOL)shouldSyncForAnchor:(id)arg1 ;
-(void)setFinalAnchor:(NSString *)arg1 ;
-(NSString *)finalAnchor;
@end

