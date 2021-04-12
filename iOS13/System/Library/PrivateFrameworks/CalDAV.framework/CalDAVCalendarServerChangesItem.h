/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem {

	NSMutableSet* _changedProperties;

}

@property (nonatomic,retain) NSMutableSet * changedProperties;              //@synthesize changedProperties=_changedProperties - In the implementation block
-(id)init;
-(NSMutableSet *)changedProperties;
-(void)setChangedProperties:(NSMutableSet *)arg1 ;
-(void)addChangedProperty:(id)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
@end

