/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem;

@interface CoreDAVBulkRequestsSupportedItem : CoreDAVItem {

	CoreDAVItem* _supported;

}

@property (nonatomic,retain) CoreDAVItem * supported;              //@synthesize supported=_supported - In the implementation block
+(id)copyParseRules;
-(CoreDAVItem *)supported;
-(id)init;
-(id)description;
-(void)setSupported:(CoreDAVItem *)arg1 ;
@end

