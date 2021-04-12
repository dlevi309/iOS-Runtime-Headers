/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVSecondScreenConnection.h>

@class AVDisplayCriteria;

@interface AVSecondScreenContentViewConnection : AVSecondScreenConnection

@property (nonatomic,retain) AVDisplayCriteria * preferredDisplayCriteria; 
@property (assign,getter=isReadyToConnect,nonatomic) BOOL readyToConnect; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (assign,nonatomic) BOOL requiresTVOutScreen; 
-(id)initWithContentView:(id)arg1 ;
@end

