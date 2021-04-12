/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


@class NSString, NSArray, TFIconArtwork;

@interface TFAppLockup : NSObject {

	NSString* _title;
	NSArray* _subtitles;
	TFIconArtwork* _iconArtwork;

}

@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subtitles;                 //@synthesize subtitles=_subtitles - In the implementation block
@property (nonatomic,readonly) TFIconArtwork * iconArtwork;              //@synthesize iconArtwork=_iconArtwork - In the implementation block
-(NSString *)title;
-(id)initWithTitle:(id)arg1 subtitles:(id)arg2 iconArtwork:(id)arg3 ;
-(NSArray *)subtitles;
-(TFIconArtwork *)iconArtwork;
@end

