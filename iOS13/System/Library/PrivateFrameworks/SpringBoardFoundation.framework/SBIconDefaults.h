/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary;

@interface SBIconDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) long long maxIconListCount; 
@property (assign,nonatomic) BOOL didShowIconReorderAlert; 
@property (nonatomic,readonly) BOOL shouldDisableLiveIcons; 
@property (nonatomic,readonly) BOOL suppressSetCurrentPage; 
@property (assign,nonatomic) BOOL suppressAppShortcutTruncation; 
@property (nonatomic,readonly) NSDictionary * legacyIconState; 
@property (nonatomic,readonly) NSDictionary * legacyIconState2; 
-(void)setSuppressSetCurrentPage:(BOOL)arg1 ;
-(BOOL)suppressSetCurrentPage;
-(void)setLegacyIconState:(NSDictionary *)arg1 ;
-(NSDictionary *)legacyIconState;
-(void)setLegacyIconState2:(NSDictionary *)arg1 ;
-(NSDictionary *)legacyIconState2;
-(void)setMaxIconListCount:(long long)arg1 ;
-(long long)maxIconListCount;
-(void)setShouldDisableLiveIcons:(BOOL)arg1 ;
-(BOOL)shouldDisableLiveIcons;
-(void)setDidShowIconReorderAlert:(BOOL)arg1 ;
-(BOOL)didShowIconReorderAlert;
-(void)setSuppressAppShortcutTruncation:(BOOL)arg1 ;
-(BOOL)suppressAppShortcutTruncation;
-(void)_bindAndRegisterDefaults;
-(void)clearLegacyDefaults;
@end

