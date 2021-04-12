/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSMutableSet *)requests;
-(void)setRequests:(NSMutableSet *)arg1 ;
-(NSMutableSet *)resources;
-(void)setResources:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)requestLookupByGenerator;
-(BOOL)addComponentIdentity:(id)arg1 usingGenerator:(id)arg2 ;
-(void)setRequestLookupByGenerator:(NSMutableDictionary *)arg1 ;
@end

