/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem {

	CoreDAVBulkRequestsItem* _crudItem;
	CoreDAVBulkRequestsItem* _simpleItem;

}

@property (nonatomic,readonly) NSDictionary * dictRepresentation; 
@property (nonatomic,retain) CoreDAVBulkRequestsItem * crudItem;                //@synthesize crudItem=_crudItem - In the implementation block
@property (nonatomic,retain) CoreDAVBulkRequestsItem * simpleItem;              //@synthesize simpleItem=_simpleItem - In the implementation block
+(id)copyParseRules;
-(id)init;
-(NSDictionary *)dictRepresentation;
-(id)description;
-(CoreDAVBulkRequestsItem *)crudItem;
-(CoreDAVBulkRequestsItem *)simpleItem;
-(void)setCrudItem:(CoreDAVBulkRequestsItem *)arg1 ;
-(void)setSimpleItem:(CoreDAVBulkRequestsItem *)arg1 ;
@end

