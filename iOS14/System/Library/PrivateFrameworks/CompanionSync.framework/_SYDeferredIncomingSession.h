/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResourceURL:(NSURL *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSURL *)resourceURL;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)metadata;
-(void)setIdsContext:(IDSMessageContext *)arg1 ;
-(IDSMessageContext *)idsContext;
@end

