/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray;

@interface VUIInAppMessagesConfig : NSObject {

	double _minimumPresentationIntervalNormal;
	double _minimumPresentationIntervalRestricted;
	NSArray* _whitelistedFields;

}

@property (assign,nonatomic) double minimumPresentationIntervalNormal;                  //@synthesize minimumPresentationIntervalNormal=_minimumPresentationIntervalNormal - In the implementation block
@property (assign,nonatomic) double minimumPresentationIntervalRestricted;              //@synthesize minimumPresentationIntervalRestricted=_minimumPresentationIntervalRestricted - In the implementation block
@property (nonatomic,retain) NSArray * whitelistedFields;                               //@synthesize whitelistedFields=_whitelistedFields - In the implementation block
-(id)init;
-(NSArray *)whitelistedFields;
-(double)minimumPresentationIntervalNormal;
-(double)minimumPresentationIntervalRestricted;
-(void)setMinimumPresentationIntervalNormal:(double)arg1 ;
-(void)setMinimumPresentationIntervalRestricted:(double)arg1 ;
-(void)setWhitelistedFields:(NSArray *)arg1 ;
@end

