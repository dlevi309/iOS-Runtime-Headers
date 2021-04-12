/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

