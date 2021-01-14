/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableSet *)propStats;
-(void)addPropStat:(id)arg1 ;
-(void)setPropStats:(NSMutableSet *)arg1 ;
-(BOOL)hasPropertyError;
@end

