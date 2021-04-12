/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableArray;

@interface GEODataURLSessionList : NSObject {

	NSMutableArray* _urlSessions;
	NSMutableArray* _lastUsedDates;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)urlSessionForRequest:(id)arg1 ;
-(void)pruneSessionsNotInIdentifierArray:(id)arg1 agressive:(BOOL)arg2 ;
-(void)addSession:(id)arg1 ;
-(id)urlSessionForIdentifier:(id)arg1 ;
@end

