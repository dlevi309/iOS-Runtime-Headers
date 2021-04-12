/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {

	NSURL* _homeURL;
	NSURL* _cardURL;

}

@property (nonatomic,readonly) NSURL * cardURL;                     //@synthesize cardURL=_cardURL - In the implementation block
@property (nonatomic,readonly) NSURL * homeURL;                     //@synthesize homeURL=_homeURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSURL *)cardURL;
-(void)startTaskGroup;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(NSURL *)homeURL;
-(id)_newPropPatchTask;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 homeURL:(id)arg3 cardURL:(id)arg4 ;
@end

