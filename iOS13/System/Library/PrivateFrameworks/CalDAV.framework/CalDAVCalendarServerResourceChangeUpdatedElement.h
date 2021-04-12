/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement {

	BOOL _content;
	CoreDAVItem* _prop;
	NSMutableSet* _calendarChanges;

}

@property (assign,nonatomic) BOOL content;                                //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) CoreDAVItem * prop;                          //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) NSMutableSet * calendarChanges;              //@synthesize calendarChanges=_calendarChanges - In the implementation block
-(id)init;
-(BOOL)content;
-(void)setContent:(BOOL)arg1 ;
-(void)addContentItem:(id)arg1 ;
-(NSMutableSet *)calendarChanges;
-(id)copyParseRules;
-(CoreDAVItem *)prop;
-(void)setCalendarChanges:(NSMutableSet *)arg1 ;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(void)addCalendarChange:(id)arg1 ;
@end

