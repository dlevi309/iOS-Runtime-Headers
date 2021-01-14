/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@interface SiriCoreConnectionType : NSObject {

	long long _technology;

}
-(BOOL)isEdge;
-(id)description;
-(BOOL)isWWAN;
-(long long)technology;
-(id)initWithTechnology:(long long)arg1 ;
-(BOOL)canUseWiFiDirectly;
-(long long)diagnosticConnectionType;
-(unsigned long long)aggregatorConnectionType;
@end

