/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(CoreDAVLeafItem *)descriptionItem;
-(void)setDescriptionItem:(CoreDAVLeafItem *)arg1 ;
@end

