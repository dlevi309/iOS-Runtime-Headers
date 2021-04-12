/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableDictionary, NSMutableArray, NSArray, NSDictionary;

@interface VCVideoRuleCollections : NSObject {

	NSMutableDictionary* _rules;
	NSMutableArray* _supportedPayloads;

}

@property (readonly) NSArray * supportedPayloads;              //@synthesize supportedPayloads=_supportedPayloads - In the implementation block
@property (readonly) NSDictionary * rules;                     //@synthesize rules=_rules - In the implementation block
+(id)newCorrectedVideoRules:(id)arg1 payload:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)rules;
-(NSArray *)supportedPayloads;
-(BOOL)isPayloadSupported:(int)arg1 ;
-(id)getVideoRulesForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 ;
-(id)supportedVideoRulesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4 ;
-(void)addSupportedPayload:(int)arg1 ;
-(void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4 ;
-(void)removeVideoRulesWithWidth:(int)arg1 height:(int)arg2 transportType:(unsigned char)arg3 encodingType:(unsigned char)arg4 ;
-(void)appendVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4 ;
-(id)supportedVideoSizesForKey:(id)arg1 ;
-(id)filterRules:(id)arg1 byBitrateRule:(id)arg2 ;
-(id)supportedVideoRulesSyncForTransportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 ;
-(id)supportedVideoRulesSizesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4 ;
@end

