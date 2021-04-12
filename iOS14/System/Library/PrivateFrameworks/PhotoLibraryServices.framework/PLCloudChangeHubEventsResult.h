/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLCloudChangeEventsResult.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface PLCloudChangeHubEventsResult : NSObject <PLCloudChangeEventsResult> {

	NSObject*<OS_xpc_object> _events;
	long long _resultType;
	unsigned long long _changeHubEventIndex;

}

@property (readonly) long long resultType;                                 //@synthesize resultType=_resultType - In the implementation block
@property (readonly) unsigned long long changeHubEventIndex;               //@synthesize changeHubEventIndex=_changeHubEventIndex - In the implementation block
@property (copy,readonly) NSString * currentTokenDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)resultType;
-(id)initWithSuccesfulEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2 ;
-(id)initWithResultType:(long long)arg1 events:(id)arg2 changeHubEventIndex:(unsigned long long)arg3 ;
-(id)localEventFromEvent:(id)arg1 ;
-(unsigned long long)changeHubEventIndex;
-(void)enumerateLocalEventsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)currentTokenDescription;
-(id)initWithUnsuccessfulResultType:(long long)arg1 ;
@end

