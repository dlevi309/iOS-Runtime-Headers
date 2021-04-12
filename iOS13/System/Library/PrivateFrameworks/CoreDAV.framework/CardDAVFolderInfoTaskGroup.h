/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVContainerInfoTaskGroup.h>

@class NSSet;

@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup {

	NSSet* _directoryGatewayURLs;

}
-(id)_copyContainerParserMappings;
-(id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 directoryGatewayURLs:(id)arg3 taskManager:(id)arg4 ;
-(int)containerInfoDepthForURL:(id)arg1 ;
@end

