/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDraggingSessionConfiguration.h>

@class UIView, NSArray;

@interface UIDraggingBeginningSessionConfiguration : UIDraggingSessionConfiguration {

	long long _dataOwner;
	UIView* _sourceView;
	NSArray* _items;
	CGPoint _initialCentroidInSourceWindow;

}

@property (assign,nonatomic) CGPoint initialCentroidInSourceWindow;              //@synthesize initialCentroidInSourceWindow=_initialCentroidInSourceWindow - In the implementation block
@property (nonatomic,readonly) long long dataOwner;                              //@synthesize dataOwner=_dataOwner - In the implementation block
@property (nonatomic,readonly) UIView * sourceView;                              //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                  //@synthesize items=_items - In the implementation block
+(id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 initialCentroidInSourceWindow:(CGPoint)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5 accessibilityEndpoint:(id)arg6 ;
+(id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 pointerTouch:(id)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5 ;
+(id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 touches:(id)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5 ;
-(NSArray *)items;
-(UIView *)sourceView;
-(long long)dataOwner;
-(CGPoint)initialCentroidInSourceWindow;
-(id)initWithItems:(id)arg1 dataOwner:(long long)arg2 requiredContextIds:(id)arg3 sourceView:(id)arg4 ;
-(void)setInitialCentroidInSourceWindow:(CGPoint)arg1 ;
@end

