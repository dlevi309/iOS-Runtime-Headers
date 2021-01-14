/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSString;

@interface TVPPlaybackState : NSObject {

	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)scanning;
+(id)stopped;
+(id)loading;
+(id)paused;
+(id)playing;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

