/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/NMSDeviceTargetable.h>
#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NSSet, NSURL, NSDictionary, NSString, NMSMessageCenter;

@interface NMSOutgoingFileTransfer : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding> {

	NSSet* targetDeviceIDs;
	NSURL* _fileURL;
	NSDictionary* _metadata;
	id _pbHeaderInfo;
	NSString* _idsIdentifier;
	unsigned long long _priority;
	double _sendTimeout;
	NSDictionary* _persistentUserInfo;
	NSDictionary* _extraIDSOptions;
	NMSMessageCenter* _messageCenter;

}

@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) id pbHeaderInfo;                                      //@synthesize pbHeaderInfo=_pbHeaderInfo - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                          //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                                   //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                    //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * extraIDSOptions;                       //@synthesize extraIDSOptions=_extraIDSOptions - In the implementation block
@property (nonatomic,copy) NSSet * targetDeviceIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)idsIdentifier;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSURL *)fileURL;
-(NSString *)description;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(NSDictionary *)metadata;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(id)CPObfuscatedDescriptionObject;
-(NSDictionary *)persistentUserInfo;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(void)setExtraIDSOptions:(NSDictionary *)arg1 ;
-(double)sendTimeout;
-(void)setPbHeaderInfo:(id)arg1 ;
-(void)setTargetDeviceIDs:(NSSet *)arg1 ;
-(NSDictionary *)extraIDSOptions;
-(NSSet *)targetDeviceIDs;
-(id)pbHeaderInfo;
@end

