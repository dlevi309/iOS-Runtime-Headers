/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSMutableArray, NSArray;

@interface PUSlideshowContextRegistry : NSObject {

	NSMutableArray* __displayContexts;

}

@property (setter=_setDisplayContexts:,nonatomic,retain) NSMutableArray * _displayContexts;              //@synthesize _displayContexts=__displayContexts - In the implementation block
@property (nonatomic,readonly) id<PUSlideshowDisplayContext> currentDisplayContext; 
@property (nonatomic,copy,readonly) NSArray * displayContexts; 
-(BOOL)addDisplayContext:(id)arg1 ;
-(BOOL)removeDisplayContext:(id)arg1 ;
-(id<PUSlideshowDisplayContext>)currentDisplayContext;
-(NSArray *)displayContexts;
-(NSMutableArray *)_displayContexts;
-(void)_setDisplayContexts:(id)arg1 ;
-(id)init;
@end

