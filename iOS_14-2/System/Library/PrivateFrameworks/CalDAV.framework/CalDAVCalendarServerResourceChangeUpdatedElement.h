/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)content;
-(id)init;
-(void)setContent:(BOOL)arg1 ;
-(CoreDAVItem *)prop;
-(NSMutableSet *)calendarChanges;
-(id)copyParseRules;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(void)setCalendarChanges:(NSMutableSet *)arg1 ;
-(void)addContentItem:(id)arg1 ;
-(void)addCalendarChange:(id)arg1 ;
@end

