/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)restoreURL;
-(BOOL)shouldGZip;
-(id)initWithServerConfiguration:(id)arg1 ;
-(NSArray *)allowedKinds;
-(NSArray *)allowedMatchStatus;
@end

