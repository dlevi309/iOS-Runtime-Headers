/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVContainerInfoTaskGroup.h>

@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup {

	BOOL _fetchSharees;

}

@property (assign,nonatomic) BOOL fetchSharees;              //@synthesize fetchSharees=_fetchSharees - In the implementation block
-(id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3 ;
-(id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2 ;
-(id)_copyContainerParserMappings;
-(BOOL)fetchSharees;
-(id)containerForURL:(id)arg1 ;
-(void)setFetchSharees:(BOOL)arg1 ;
@end

