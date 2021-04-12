/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class NSURL, NSString, NSDictionary, IDSMessageContext;

@interface _SYDeferredIncomingSession : NSObject {

	NSURL* _resourceURL;
	NSString* _identifier;
	NSDictionary* _metadata;
	IDSMessageContext* _idsContext;

}

@property (nonatomic,copy) NSURL * resourceURL;                           //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) IDSMessageContext * idsContext;              //@synthesize idsContext=_idsContext - In the implementation block
-(NSString *)identifier;
-(NSURL *)resourceURL;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setResourceURL:(NSURL *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setIdsContext:(IDSMessageContext *)arg1 ;
-(IDSMessageContext *)idsContext;
@end

