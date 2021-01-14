/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableArray;

@interface GEODataURLSessionList : NSObject {

	NSMutableArray* _urlSessions;
	NSMutableArray* _lastUsedDates;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)urlSessionForRequest:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)addSession:(id)arg1 ;
-(void)pruneSessionsNotInIdentifierArray:(id)arg1 agressive:(BOOL)arg2 ;
-(id)urlSessionForIdentifier:(id)arg1 ;
@end

