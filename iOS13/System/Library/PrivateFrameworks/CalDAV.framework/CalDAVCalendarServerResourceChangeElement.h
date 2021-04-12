/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItemWithHrefChildItem.h>

@class CalDAVUpdateOwnerItem, NSURL;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem {

	CalDAVUpdateOwnerItem* _changedBy;

}

@property (nonatomic,readonly) NSURL * fullHrefURL; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * changedBy;              //@synthesize changedBy=_changedBy - In the implementation block
-(id)init;
-(CalDAVUpdateOwnerItem *)changedBy;
-(id)copyParseRules;
-(void)setChangedBy:(CalDAVUpdateOwnerItem *)arg1 ;
-(NSURL *)fullHrefURL;
@end

