/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class GEOComposedGuidanceEvent;

@interface _MNJunctionViewPreloadEvent : NSObject {

	BOOL _needsPreload;
	GEOComposedGuidanceEvent* _junctionViewEvent;

}

@property (nonatomic,retain) GEOComposedGuidanceEvent * junctionViewEvent;              //@synthesize junctionViewEvent=_junctionViewEvent - In the implementation block
@property (assign,nonatomic) BOOL needsPreload;                                         //@synthesize needsPreload=_needsPreload - In the implementation block
-(GEOComposedGuidanceEvent *)junctionViewEvent;
-(void)setJunctionViewEvent:(GEOComposedGuidanceEvent *)arg1 ;
-(BOOL)needsPreload;
-(void)setNeedsPreload:(BOOL)arg1 ;
@end

