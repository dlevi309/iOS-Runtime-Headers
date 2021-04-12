/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSPointerArray, NSString;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {

	NSPointerArray* _backdrops;
	BOOL _disableInPlaceFiltering;
	NSString* _groupName;
	double _scale;
	double _minimumScale;

}

@property (nonatomic,copy) NSString * groupName;                        //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double minimumScale;                       //@synthesize minimumScale=_minimumScale - In the implementation block
@property (assign,nonatomic) BOOL disableInPlaceFiltering;              //@synthesize disableInPlaceFiltering=_disableInPlaceFiltering - In the implementation block
-(id)init;
-(id)description;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setDisableInPlaceFiltering:(BOOL)arg1 ;
-(BOOL)allowInPlaceFiltering;
-(BOOL)disableInPlaceFiltering;
-(long long)indexOfBackdropView:(id)arg1 ;
-(void)updateAllBackdropViews;
-(id)initWithBackdrop:(id)arg1 ;
-(void)addBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(void)removeBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(void)setMinimumScale:(double)arg1 ;
-(void)applyScaleHint:(double)arg1 ;
-(double)minimumScale;
@end

