/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVItem, CoreDAVErrorItem;

@interface CoreDAVPropStatItem : CoreDAVItem {

	CoreDAVLeafItem* _status;
	CoreDAVItem* _prop;
	CoreDAVErrorItem* _errorItem;
	CoreDAVLeafItem* _responseDescription;

}

@property (nonatomic,retain) CoreDAVLeafItem * status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) CoreDAVItem * prop;                                 //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * errorItem;                       //@synthesize errorItem=_errorItem - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * responseDescription;              //@synthesize responseDescription=_responseDescription - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(CoreDAVLeafItem *)status;
-(void)setStatus:(CoreDAVLeafItem *)arg1 ;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)responseDescription;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(CoreDAVErrorItem *)errorItem;
-(void)setErrorItem:(CoreDAVErrorItem *)arg1 ;
@end

