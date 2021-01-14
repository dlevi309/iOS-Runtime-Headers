/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/NMSDeviceSourced.h>
#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NSString, NMSMessageCenter, NSURL, NSDictionary, IDSMessageContext;

@interface NMSIncomingFileTransfer : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding> {

	NSString* sourceDeviceID;
	NMSMessageCenter* _messageCenter;
	NSString* _idsIdentifier;
	NSURL* _fileURL;
	NSDictionary* _metadata;
	id _pbHeaderInfo;
	unsigned long long _priority;
	IDSMessageContext* _idsContext;

}

@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) id pbHeaderInfo;                                      //@synthesize pbHeaderInfo=_pbHeaderInfo - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                          //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSString * sourceDeviceID; 
@property (nonatomic,retain) IDSMessageContext * idsContext;                       //@synthesize idsContext=_idsContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)idsIdentifier;
-(void)setSourceDeviceID:(NSString *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSURL *)fileURL;
-(NSString *)sourceDeviceID;
-(NSString *)description;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(NSDictionary *)metadata;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(id)CPObfuscatedDescriptionObject;
-(void)setPbHeaderInfo:(id)arg1 ;
-(void)setIdsContext:(IDSMessageContext *)arg1 ;
-(id)pbHeaderInfo;
-(IDSMessageContext *)idsContext;
@end

