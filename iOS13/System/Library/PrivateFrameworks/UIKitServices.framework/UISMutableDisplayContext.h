/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <UIKitServices/UISDisplayContext.h>

@class FBSDisplayConfiguration, UISApplicationSupportDisplayEdgeInfo;

@interface UISMutableDisplayContext : UISDisplayContext

@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInfo * displayEdgeInfo; 
@property (assign,nonatomic) unsigned long long artworkSubtype; 
@property (assign,nonatomic) unsigned long long userInterfaceStyle; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setArtworkSubtype:(unsigned long long)arg1 ;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(void)setUserInterfaceStyle:(unsigned long long)arg1 ;
-(void)setDisplayEdgeInfo:(UISApplicationSupportDisplayEdgeInfo *)arg1 ;
@end

