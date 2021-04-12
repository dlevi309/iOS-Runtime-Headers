/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISceneSnapshotPresentation.h>

@class FBSceneSnapshot, NSString;

@interface _UISceneSnapshotPresentationView : UIView <UISceneSnapshotPresentation> {

	FBSceneSnapshot* _snapshot;

}

@property (nonatomic,retain) FBSceneSnapshot * sceneSnapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithSnapshot:(id)arg1 ;
-(FBSceneSnapshot *)sceneSnapshot;
-(void)setSceneSnapshot:(FBSceneSnapshot *)arg1 ;
@end

