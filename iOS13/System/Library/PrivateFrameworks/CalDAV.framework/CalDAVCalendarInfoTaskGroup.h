/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVContainerInfoTaskGroup.h>

@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup {

	BOOL _fetchSharees;

}

@property (assign,nonatomic) BOOL fetchSharees;              //@synthesize fetchSharees=_fetchSharees - In the implementation block
-(id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3 ;
-(id)_copyContainerParserMappings;
-(BOOL)fetchSharees;
-(id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2 ;
-(id)containerForURL:(id)arg1 ;
-(void)setFetchSharees:(BOOL)arg1 ;
@end

