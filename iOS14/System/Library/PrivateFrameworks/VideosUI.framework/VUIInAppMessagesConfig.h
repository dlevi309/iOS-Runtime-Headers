/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray;

@interface VUIInAppMessagesConfig : NSObject {

	double _minimumPresentationIntervalNormal;
	double _minimumPresentationIntervalRestricted;
	double _pageEventDelay;
	NSArray* _whitelistedFields;

}

@property (assign,nonatomic) double minimumPresentationIntervalNormal;                  //@synthesize minimumPresentationIntervalNormal=_minimumPresentationIntervalNormal - In the implementation block
@property (assign,nonatomic) double minimumPresentationIntervalRestricted;              //@synthesize minimumPresentationIntervalRestricted=_minimumPresentationIntervalRestricted - In the implementation block
@property (assign,nonatomic) double pageEventDelay;                                     //@synthesize pageEventDelay=_pageEventDelay - In the implementation block
@property (nonatomic,retain) NSArray * whitelistedFields;                               //@synthesize whitelistedFields=_whitelistedFields - In the implementation block
-(id)init;
-(double)minimumPresentationIntervalNormal;
-(double)minimumPresentationIntervalRestricted;
-(void)setMinimumPresentationIntervalNormal:(double)arg1 ;
-(void)setMinimumPresentationIntervalRestricted:(double)arg1 ;
-(double)pageEventDelay;
-(void)setPageEventDelay:(double)arg1 ;
-(NSArray *)whitelistedFields;
-(void)setWhitelistedFields:(NSArray *)arg1 ;
@end

