/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem {

	CoreDAVHrefItem* _href;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;              //@synthesize href=_href - In the implementation block
+(id)copyParseRules;
-(id)description;
-(void)write:(id)arg1 ;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
@end

