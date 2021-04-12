/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEndpointIdentifier:(NSString *)arg1 ;
-(NSString *)endpointIdentifier;
-(NSIndexSet *)revisionsIndexSet;
-(NSString *)revisionVersionToken;
-(void)setRevisionVersionToken:(NSString *)arg1 ;
-(void)setRevisionsIndexSet:(NSIndexSet *)arg1 ;
@end

