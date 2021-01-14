/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/


@class NSArray;

@interface MCDBrowsableContentUtilities : NSObject {

	NSArray* _nowPlayingIdentifiers;

}

@property (nonatomic,retain) NSArray * nowPlayingIdentifiers;                 //@synthesize nowPlayingIdentifiers=_nowPlayingIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * firstPartyAppBundleIDs; 
+(id)sharedInstance;
-(NSArray *)nowPlayingIdentifiers;
-(void)setNowPlayingIdentifiers:(NSArray *)arg1 ;
-(NSArray *)firstPartyAppBundleIDs;
@end

