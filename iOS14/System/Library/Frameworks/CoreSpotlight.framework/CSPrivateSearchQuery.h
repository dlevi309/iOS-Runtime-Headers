/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSSearchQuery.h>

@class NSString, CSSearchConnection;

@interface CSPrivateSearchQuery : CSSearchQuery {

	NSString* _indexPath;
	NSString* _resolvedIndexPath;
	CSSearchConnection* _savedConnection;

}

@property (nonatomic,retain) NSString * indexPath;                              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) NSString * resolvedIndexPath;                      //@synthesize resolvedIndexPath=_resolvedIndexPath - In the implementation block
@property (nonatomic,retain) CSSearchConnection * savedConnection;              //@synthesize savedConnection=_savedConnection - In the implementation block
-(CSSearchConnection *)savedConnection;
-(void)setIndexPath:(NSString *)arg1 ;
-(NSString *)resolvedIndexPath;
-(void)setResolvedIndexPath:(NSString *)arg1 ;
-(NSString *)indexPath;
-(void)start;
-(id)initWithPath:(id)arg1 queryString:(id)arg2 context:(id)arg3 attributes:(id)arg4 ;
-(void)setSavedConnection:(CSSearchConnection *)arg1 ;
-(id)connection;
-(id)initWithPath:(id)arg1 queryString:(id)arg2 attributers:(id)arg3 ;
-(id)initWithPath:(id)arg1 queryString:(id)arg2 context:(id)arg3 ;
@end

