/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, CoreDAVItemWithNoChildren;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem {

	NSMutableSet* _hrefs;
	CoreDAVItemWithNoChildren* _unauthenticated;

}

@property (nonatomic,retain) NSMutableSet * hrefs;                                     //@synthesize hrefs=_hrefs - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
+(id)copyParseRules;
-(id)description;
-(NSMutableSet *)hrefs;
-(id)hrefsAsOriginalURLs;
-(id)hrefsAsFullURLs;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(void)addHref:(id)arg1 ;
-(void)setHrefs:(NSMutableSet *)arg1 ;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)hrefsAsStrings;
@end

