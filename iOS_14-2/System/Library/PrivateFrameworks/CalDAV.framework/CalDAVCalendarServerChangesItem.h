/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem {

	NSMutableSet* _changedProperties;

}

@property (nonatomic,retain) NSMutableSet * changedProperties;              //@synthesize changedProperties=_changedProperties - In the implementation block
-(void)setChangedProperties:(NSMutableSet *)arg1 ;
-(id)init;
-(NSMutableSet *)changedProperties;
-(void)addChangedProperty:(id)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
@end

