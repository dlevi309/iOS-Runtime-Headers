/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDisplayEdgeInfo:(UISApplicationSupportDisplayEdgeInfo *)arg1 ;
-(void)setArtworkSubtype:(unsigned long long)arg1 ;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(void)setUserInterfaceStyle:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

