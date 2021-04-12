/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)cardURL;
-(NSString *)description;
-(void)startTaskGroup;
-(NSURL *)homeURL;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(id)_newPropPatchTask;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 homeURL:(id)arg3 cardURL:(id)arg4 ;
@end

