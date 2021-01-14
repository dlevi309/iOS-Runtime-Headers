/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem, CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem {

	CoreDAVItem* _prop;
	CoreDAVLeafItem* _descriptionItem;

}

@property (nonatomic,retain) CoreDAVItem * prop;                             //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * descriptionItem;              //@synthesize descriptionItem=_descriptionItem - In the implementation block
+(id)copyParseRules;
-(id)init;
-(CoreDAVItem *)prop;
-(id)description;
-(CoreDAVLeafItem *)descriptionItem;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(void)setDescriptionItem:(CoreDAVLeafItem *)arg1 ;
@end

