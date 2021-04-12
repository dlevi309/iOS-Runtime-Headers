/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSPointerArray, NSString;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {

	NSPointerArray* _backdrops;
	BOOL _disableInPlaceFiltering;
	NSString* _groupName;
	NSString* _groupNamespace;
	double _scale;
	double _minimumScale;

}

@property (nonatomic,copy) NSString * groupName;                        //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * groupNamespace;                   //@synthesize groupNamespace=_groupNamespace - In the implementation block
@property (assign,nonatomic) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double minimumScale;                       //@synthesize minimumScale=_minimumScale - In the implementation block
@property (assign,nonatomic) BOOL disableInPlaceFiltering;              //@synthesize disableInPlaceFiltering=_disableInPlaceFiltering - In the implementation block
-(double)minimumScale;
-(void)addBackdrop:(id)arg1 update:(BOOL)arg2 ;
-(void)setMinimumScale:(double)arg1 ;
-(id)initWithBackdrop:(id)arg1 ;
-(id)init;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)applyScaleHint:(double)arg1 ;
-(double)scale;
-(void)updateAllBackdropViews;
-(void)setDisableInPlaceFiltering:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 scale:(double)arg2 ;
-(id)description;
-(BOOL)disableInPlaceFiltering;
-(NSString *)groupNamespace;
-(void)setScale:(double)arg1 ;
-(void)setGroupNamespace:(NSString *)arg1 ;
-(BOOL)allowInPlaceFiltering;
-(long long)indexOfBackdropView:(id)arg1 ;
-(void)removeBackdrop:(id)arg1 update:(BOOL)arg2 ;
@end

