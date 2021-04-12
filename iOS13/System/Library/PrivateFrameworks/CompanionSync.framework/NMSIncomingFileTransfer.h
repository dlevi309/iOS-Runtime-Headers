/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(NSString *)sourceDeviceID;
-(void)setSourceDeviceID:(NSString *)arg1 ;
-(id)CPObfuscatedDescriptionObject;
-(NSString *)idsIdentifier;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(void)setPbHeaderInfo:(id)arg1 ;
-(void)setIdsContext:(IDSMessageContext *)arg1 ;
-(id)pbHeaderInfo;
-(IDSMessageContext *)idsContext;
@end

