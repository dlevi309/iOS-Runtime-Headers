/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSMutableDictionary, NSMutableSet;

@interface FMObservingCell : UITableViewCell {

	id _representedObject;
	NSMutableDictionary* _kvoObservationTokens;
	NSMutableSet* _notificationTokens;

}

@property (nonatomic,retain) NSMutableDictionary * kvoObservationTokens;              //@synthesize kvoObservationTokens=_kvoObservationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationTokens;                       //@synthesize notificationTokens=_notificationTokens - In the implementation block
@property (assign,nonatomic,__weak) id representedObject;                             //@synthesize representedObject=_representedObject - In the implementation block
-(NSMutableSet *)notificationTokens;
-(void)prepareForReuse;
-(void)setRepresentedObject:(id)arg1 ;
-(void)setNotificationTokens:(NSMutableSet *)arg1 ;
-(id)representedObject;
-(void)removeKVOObservationTokens;
-(void)removeNotificationTokens;
-(void)addObserversForRepresentedObject:(id)arg1 ;
-(NSMutableDictionary *)kvoObservationTokens;
-(void)setKvoObservationTokens:(NSMutableDictionary *)arg1 ;
-(void)addKVOObservationToken:(id)arg1 forObject:(id)arg2 ;
-(void)addNotificationToken:(id)arg1 ;
@end

