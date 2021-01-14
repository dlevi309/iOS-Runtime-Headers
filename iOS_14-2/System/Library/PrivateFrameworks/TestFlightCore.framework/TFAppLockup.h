/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)subtitles;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 subtitles:(id)arg2 iconArtwork:(id)arg3 ;
-(TFIconArtwork *)iconArtwork;
@end

