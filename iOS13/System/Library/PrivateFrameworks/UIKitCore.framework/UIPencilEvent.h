/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIEvent.h>

@class NSHashTable;

@interface UIPencilEvent : UIEvent {

	NSHashTable* _trackedInteractions;

}

@property (nonatomic,retain) NSHashTable * trackedInteractions;              //@synthesize trackedInteractions=_trackedInteractions - In the implementation block
-(long long)type;
-(id)_init;
-(long long)subtype;
-(NSHashTable *)trackedInteractions;
-(id)collectAllActiveInteractions;
-(void)deregisterAllInteractionsForWindow:(id)arg1 ;
-(void)deregisterInteraction:(id)arg1 ;
-(void)_sendEventToInteractions;
-(void)registerInteraction:(id)arg1 ;
-(void)setTrackedInteractions:(NSHashTable *)arg1 ;
@end

