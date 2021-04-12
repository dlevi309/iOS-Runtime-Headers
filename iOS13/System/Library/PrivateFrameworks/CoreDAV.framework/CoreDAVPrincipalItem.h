/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPrincipalItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _all;
	CoreDAVItemWithNoChildren* _authenticated;
	CoreDAVItemWithNoChildren* _unauthenticated;
	CoreDAVItem* _property;
	CoreDAVItemWithNoChildren* _selfItem;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                                   //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * all;                          //@synthesize all=_all - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * authenticated;                //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
@property (nonatomic,retain) CoreDAVItem * property;                                   //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * selfItem;                     //@synthesize selfItem=_selfItem - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(CoreDAVItemWithNoChildren *)all;
-(void)write:(id)arg1 ;
-(void)setAuthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)authenticated;
-(id)hashString;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(CoreDAVItem *)property;
-(void)setProperty:(CoreDAVItem *)arg1 ;
-(void)setAll:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(id)initTypeIsHREFWithURL:(id)arg1 ;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setSelfItem:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)selfItem;
-(id)initTypeIsAll;
-(id)initTypeIsProperty:(id)arg1 ;
-(id)initTypeIsAuthenticated;
-(id)initTypeIsUnauthenticated;
-(id)initTypeIsSelf;
@end

