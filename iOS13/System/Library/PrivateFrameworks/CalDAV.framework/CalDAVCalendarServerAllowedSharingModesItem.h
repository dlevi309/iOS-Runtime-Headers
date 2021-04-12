/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _canBePublished;
	CoreDAVItemWithNoChildren* _canBeShared;
	CoreDAVItemWithNoChildren* _isMarkedUndeletable;
	CoreDAVItemWithNoChildren* _isMarkedImmutableSharees;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * canBePublished;                        //@synthesize canBePublished=_canBePublished - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * canBeShared;                           //@synthesize canBeShared=_canBeShared - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * isMarkedUndeletable;                   //@synthesize isMarkedUndeletable=_isMarkedUndeletable - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * isMarkedImmutableSharees;              //@synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees - In the implementation block
-(id)init;
-(CoreDAVItemWithNoChildren *)canBeShared;
-(CoreDAVItemWithNoChildren *)isMarkedImmutableSharees;
-(CoreDAVItemWithNoChildren *)isMarkedUndeletable;
-(CoreDAVItemWithNoChildren *)canBePublished;
-(void)setCanBeShared:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setCanBePublished:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setIsMarkedUndeletable:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setIsMarkedImmutableSharees:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)copyParseRules;
@end

