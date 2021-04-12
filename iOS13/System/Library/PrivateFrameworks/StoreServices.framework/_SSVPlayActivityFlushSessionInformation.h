/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSString, NSIndexSet;

@interface _SSVPlayActivityFlushSessionInformation : NSObject {

	NSString* _endpointIdentifier;
	NSIndexSet* _revisionsIndexSet;
	NSString* _revisionVersionToken;
	unsigned long long _sessionToken;

}

@property (nonatomic,copy) NSString * endpointIdentifier;                  //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (nonatomic,retain) NSIndexSet * revisionsIndexSet;               //@synthesize revisionsIndexSet=_revisionsIndexSet - In the implementation block
@property (nonatomic,copy) NSString * revisionVersionToken;                //@synthesize revisionVersionToken=_revisionVersionToken - In the implementation block
@property (assign,nonatomic) unsigned long long sessionToken;              //@synthesize sessionToken=_sessionToken - In the implementation block
-(void)setSessionToken:(unsigned long long)arg1 ;
-(unsigned long long)sessionToken;
-(NSIndexSet *)revisionsIndexSet;
-(void)setRevisionVersionToken:(NSString *)arg1 ;
-(NSString *)endpointIdentifier;
-(NSString *)revisionVersionToken;
-(void)setRevisionsIndexSet:(NSIndexSet *)arg1 ;
-(void)setEndpointIdentifier:(NSString *)arg1 ;
@end

