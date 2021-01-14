/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIEvent.h>

@class NSHashTable;

@interface UIPencilEvent : UIEvent {

	NSHashTable* _trackedInteractions;

}

@property (nonatomic,retain) NSHashTable * trackedInteractions;              //@synthesize trackedInteractions=_trackedInteractions - In the implementation block
-(long long)subtype;
-(void)deregisterInteraction:(id)arg1 ;
-(void)_sendEventToInteractions;
-(NSHashTable *)trackedInteractions;
-(id)collectAllActiveInteractions;
-(long long)type;
-(void)registerInteraction:(id)arg1 ;
-(id)_init;
-(void)deregisterAllInteractionsForWindow:(id)arg1 ;
-(void)setTrackedInteractions:(NSHashTable *)arg1 ;
@end

