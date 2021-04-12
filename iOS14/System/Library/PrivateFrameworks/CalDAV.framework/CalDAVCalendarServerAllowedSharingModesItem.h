/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CoreDAVItemWithNoChildren *)canBeShared;
-(id)init;
-(void)setCanBeShared:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)isMarkedUndeletable;
-(CoreDAVItemWithNoChildren *)canBePublished;
-(void)setCanBePublished:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)isMarkedImmutableSharees;
-(void)setIsMarkedUndeletable:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setIsMarkedImmutableSharees:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)copyParseRules;
@end

