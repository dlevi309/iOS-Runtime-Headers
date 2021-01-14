/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@class NSString;

@interface SVAudioSessionConfiguration : NSObject {

	NSString* _category;
	NSString* _mode;
	unsigned long long _routeSharingPolicy;

}

@property (nonatomic,copy) NSString * category;                                  //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * mode;                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned long long routeSharingPolicy;              //@synthesize routeSharingPolicy=_routeSharingPolicy - In the implementation block
-(NSString *)mode;
-(void)setCategory:(NSString *)arg1 ;
-(unsigned long long)routeSharingPolicy;
-(NSString *)category;
-(void)setMode:(NSString *)arg1 ;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(id)initWithCategory:(id)arg1 mode:(id)arg2 policy:(unsigned long long)arg3 ;
-(void)setRouteSharingPolicy:(unsigned long long)arg1 ;
@end

