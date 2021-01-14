/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem {

	NSMutableSet* _comps;

}

@property (nonatomic,retain) NSMutableSet * comps;              //@synthesize comps=_comps - In the implementation block
@property (nonatomic,readonly) NSSet * compNames; 
-(id)init;
-(NSMutableSet *)comps;
-(id)description;
-(id)componentsAsString;
-(id)copyParseRules;
-(id)childrenToWrite;
-(NSSet *)compNames;
-(void)addComp:(id)arg1 ;
-(void)setComps:(NSMutableSet *)arg1 ;
@end

