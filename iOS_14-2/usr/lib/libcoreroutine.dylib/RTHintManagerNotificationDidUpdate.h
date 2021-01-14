/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSNumber;

@interface RTHintManagerNotificationDidUpdate : RTNotification {

	NSNumber* _hintSourcesUpdated;

}

@property (nonatomic,retain) NSNumber * hintSourcesUpdated;              //@synthesize hintSourcesUpdated=_hintSourcesUpdated - In the implementation block
+(id)sourcesUpdatedForHints:(id)arg1 ;
-(id)description;
-(NSNumber *)hintSourcesUpdated;
-(id)initWithHints:(id)arg1 ;
-(void)setHintSourcesUpdated:(NSNumber *)arg1 ;
@end

