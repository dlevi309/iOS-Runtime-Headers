/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVAction.h>

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction {

	int _absoluteOrder;
	NSURL* _priorURL;

}

@property (nonatomic,readonly) int absoluteOrder;              //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
@property (nonatomic,retain) NSURL * priorURL;                 //@synthesize priorURL=_priorURL - In the implementation block
-(id)description;
-(id)initWithAction:(int)arg1 context:(id)arg2 absoluteOrder:(int)arg3 ;
-(int)absoluteOrder;
-(NSURL *)priorURL;
-(void)setPriorURL:(NSURL *)arg1 ;
@end

