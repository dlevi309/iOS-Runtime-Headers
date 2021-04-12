/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/


@class NSArray;

@interface MCDBrowsableContentUtilities : NSObject {

	NSArray* _nowPlayingIdentifiers;

}

@property (nonatomic,retain) NSArray * nowPlayingIdentifiers;                 //@synthesize nowPlayingIdentifiers=_nowPlayingIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * firstPartyAppBundleIDs; 
+(id)sharedInstance;
-(void)setNowPlayingIdentifiers:(NSArray *)arg1 ;
-(NSArray *)nowPlayingIdentifiers;
-(NSArray *)firstPartyAppBundleIDs;
@end

