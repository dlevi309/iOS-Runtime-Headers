/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

