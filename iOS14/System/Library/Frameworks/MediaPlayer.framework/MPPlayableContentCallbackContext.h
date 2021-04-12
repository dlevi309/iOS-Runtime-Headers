/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSIndexPath;

@interface MPPlayableContentCallbackContext : NSObject {

	BOOL _serviced;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) BOOL serviced;                          //@synthesize serviced=_serviced - In the implementation block
-(BOOL)serviced;
-(NSIndexPath *)indexPath;
-(void)setServiced:(BOOL)arg1 ;
-(id)initWithIndexPath:(id)arg1 ;
@end

