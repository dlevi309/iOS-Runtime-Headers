/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)componentsAsString;
-(NSSet *)compNames;
-(void)addComp:(id)arg1 ;
-(NSMutableSet *)comps;
-(id)copyParseRules;
-(id)childrenToWrite;
-(void)setComps:(NSMutableSet *)arg1 ;
@end

