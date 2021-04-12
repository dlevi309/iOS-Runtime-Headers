/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem {

	NSMutableSet* _transports;

}

@property (nonatomic,retain) NSMutableSet * transports;              //@synthesize transports=_transports - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(NSMutableSet *)transports;
-(void)addTransport:(id)arg1 ;
-(void)setTransports:(NSMutableSet *)arg1 ;
@end

