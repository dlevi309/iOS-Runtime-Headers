/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDAssistantAccessControlModifiedEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _isEnabled;
	unsigned long long _options;
	unsigned long long _numEnabledAccessories;
	unsigned long long _numCapableAccessories;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isEnabled;                                        //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long options;                            //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long numEnabledAccessories;              //@synthesize numEnabledAccessories=_numEnabledAccessories - In the implementation block
@property (assign,nonatomic) unsigned long long numCapableAccessories;              //@synthesize numCapableAccessories=_numCapableAccessories - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)eventWithIsEnabled:(BOOL)arg1 options:(unsigned long long)arg2 numEnabledAccessories:(unsigned long long)arg3 numCapableAccessories:(unsigned long long)arg4 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setNumEnabledAccessories:(unsigned long long)arg1 ;
-(void)setNumCapableAccessories:(unsigned long long)arg1 ;
-(unsigned long long)numEnabledAccessories;
-(unsigned long long)numCapableAccessories;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

