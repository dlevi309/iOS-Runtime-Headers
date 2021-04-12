/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem {

	NSMutableSet* _propStats;

}

@property (nonatomic,retain) NSMutableSet * propStats;              //@synthesize propStats=_propStats - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(BOOL)hasPropertyError;
-(NSMutableSet *)propStats;
-(void)addPropStat:(id)arg1 ;
-(void)setPropStats:(NSMutableSet *)arg1 ;
@end

