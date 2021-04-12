/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVMultiStatusItem.h>

@class NSString;

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem {

	NSString* _syncToken;

}

@property (nonatomic,readonly) NSString * syncToken;              //@synthesize syncToken=_syncToken - In the implementation block
+(id)copyParseRules;
-(id)description;
-(NSString *)syncToken;
-(void)_setSyncTokenItem:(id)arg1 ;
@end

