/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement {

	long long _created;
	long long _updated;
	long long _deleted;

}

@property (assign,nonatomic) long long created;              //@synthesize created=_created - In the implementation block
@property (assign,nonatomic) long long updated;              //@synthesize updated=_updated - In the implementation block
@property (assign,nonatomic) long long deleted;              //@synthesize deleted=_deleted - In the implementation block
-(id)init;
-(long long)deleted;
-(long long)created;
-(void)setCreated:(long long)arg1 ;
-(void)setDeleted:(long long)arg1 ;
-(long long)updated;
-(void)setUpdated:(long long)arg1 ;
-(id)copyParseRules;
-(void)setCreatedItem:(id)arg1 ;
-(void)setUpdatedItem:(id)arg1 ;
-(void)setDeletedItem:(id)arg1 ;
@end
