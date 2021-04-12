/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSArray, NSURL;

@interface ICMusicRestoreBagConfiguration : NSObject {

	BOOL _shouldGZip;
	NSArray* _allowedKinds;
	NSArray* _allowedMatchStatus;
	NSURL* _restoreURL;

}

@property (nonatomic,copy,readonly) NSArray * allowedKinds;                    //@synthesize allowedKinds=_allowedKinds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allowedMatchStatus;              //@synthesize allowedMatchStatus=_allowedMatchStatus - In the implementation block
@property (nonatomic,copy,readonly) NSURL * restoreURL;                        //@synthesize restoreURL=_restoreURL - In the implementation block
@property (nonatomic,readonly) BOOL shouldGZip;                                //@synthesize shouldGZip=_shouldGZip - In the implementation block
-(id)initWithServerConfiguration:(id)arg1 ;
-(NSArray *)allowedKinds;
-(NSArray *)allowedMatchStatus;
-(NSURL *)restoreURL;
-(BOOL)shouldGZip;
@end

