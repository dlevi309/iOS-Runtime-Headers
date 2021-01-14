/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class SGMBadInteractionIgnored;

@interface SGErrorMetrics : NSObject {

	SGMBadInteractionIgnored* _badInteractionIgnored;

}

@property (nonatomic,retain) SGMBadInteractionIgnored * badInteractionIgnored;              //@synthesize badInteractionIgnored=_badInteractionIgnored - In the implementation block
+(void)recordInteractionIgnoredWithReason:(SGMInteractionIgnoredReason_)arg1 ;
+(id)instance;
-(SGMBadInteractionIgnored *)badInteractionIgnored;
-(void)setBadInteractionIgnored:(SGMBadInteractionIgnored *)arg1 ;
-(id)init;
@end

