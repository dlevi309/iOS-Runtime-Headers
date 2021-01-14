/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@class NSMutableSet, NSMutableDictionary;

@interface DKReportingConcurrentRequestGroup : NSObject {

	NSMutableSet* _requests;
	NSMutableDictionary* _requestLookupByGenerator;
	NSMutableSet* _resources;

}

@property (nonatomic,retain) NSMutableSet * resources;                                    //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) NSMutableSet * requests;                                     //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestLookupByGenerator;              //@synthesize requestLookupByGenerator=_requestLookupByGenerator - In the implementation block
-(id)init;
-(NSMutableSet *)resources;
-(NSMutableSet *)requests;
-(void)setResources:(NSMutableSet *)arg1 ;
-(void)setRequests:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)requestLookupByGenerator;
-(BOOL)addComponentIdentity:(id)arg1 usingGenerator:(id)arg2 ;
-(void)setRequestLookupByGenerator:(NSMutableDictionary *)arg1 ;
@end

