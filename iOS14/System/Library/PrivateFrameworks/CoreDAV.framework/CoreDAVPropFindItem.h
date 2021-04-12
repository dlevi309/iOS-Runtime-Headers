/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPropFindItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _propName;
	CoreDAVItemWithNoChildren* _allProp;
	CoreDAVItem* _include;
	CoreDAVItem* _prop;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * propName;              //@synthesize propName=_propName - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * allProp;               //@synthesize allProp=_allProp - In the implementation block
@property (nonatomic,retain) CoreDAVItem * include;                             //@synthesize include=_include - In the implementation block
@property (nonatomic,retain) CoreDAVItem * prop;                                //@synthesize prop=_prop - In the implementation block
+(id)copyParseRules;
-(id)init;
-(CoreDAVItem *)prop;
-(void)setInclude:(CoreDAVItem *)arg1 ;
-(id)description;
-(void)setPropName:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItem *)include;
-(CoreDAVItemWithNoChildren *)allProp;
-(CoreDAVItemWithNoChildren *)propName;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(void)setAllProp:(CoreDAVItemWithNoChildren *)arg1 ;
@end

