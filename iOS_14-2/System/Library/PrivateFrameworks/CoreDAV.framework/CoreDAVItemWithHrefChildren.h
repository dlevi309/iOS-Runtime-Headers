/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableSet *)hrefs;
-(id)description;
-(id)hrefsAsFullURLs;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(void)addHref:(id)arg1 ;
-(void)setHrefs:(NSMutableSet *)arg1 ;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)hrefsAsOriginalURLs;
-(id)hrefsAsStrings;
@end

