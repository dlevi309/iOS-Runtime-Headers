/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBAppSwitcherDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSArray * recentsPlistRepresentation; 
@property (assign,nonatomic) unsigned long long bottomEdgeGestureSwipeCount; 
@property (getter=isSpringBoardKillable,nonatomic,readonly) BOOL springBoardKillable; 
@property (getter=areTrackpadSwitcherGesturesEnabled,nonatomic,readonly) BOOL trackpadSwitcherGesturesEnabled; 
@property (nonatomic,readonly) NSArray * legacyRecentApplications; 
@property (nonatomic,readonly) NSArray * legacyRecentDisplayItems; 
@property (nonatomic,readonly) NSArray * legacyRecentDisplayItemRoles; 
-(void)setLegacyRecentApplications:(NSArray *)arg1 ;
-(NSArray *)legacyRecentApplications;
-(void)setLegacyRecentDisplayItemRoles:(NSArray *)arg1 ;
-(NSArray *)legacyRecentDisplayItemRoles;
-(void)setSpringBoardKillable:(BOOL)arg1 ;
-(BOOL)isSpringBoardKillable;
-(void)setTrackpadSwitcherGesturesEnabled:(BOOL)arg1 ;
-(BOOL)areTrackpadSwitcherGesturesEnabled;
-(void)setBottomEdgeGestureSwipeCount:(unsigned long long)arg1 ;
-(unsigned long long)bottomEdgeGestureSwipeCount;
-(void)setLegacyRecentDisplayItems:(NSArray *)arg1 ;
-(NSArray *)legacyRecentDisplayItems;
-(void)setRecentsPlistRepresentation:(NSArray *)arg1 ;
-(NSArray *)recentsPlistRepresentation;
-(void)clearLegacyDefaults;
-(void)_bindAndRegisterDefaults;
@end

