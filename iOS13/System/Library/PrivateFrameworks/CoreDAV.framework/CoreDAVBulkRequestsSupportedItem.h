/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem;

@interface CoreDAVBulkRequestsSupportedItem : CoreDAVItem {

	CoreDAVItem* _supported;

}

@property (nonatomic,retain) CoreDAVItem * supported;              //@synthesize supported=_supported - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(CoreDAVItem *)supported;
-(void)setSupported:(CoreDAVItem *)arg1 ;
@end

