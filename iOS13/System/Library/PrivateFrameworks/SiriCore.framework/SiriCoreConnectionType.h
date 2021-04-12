/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@interface SiriCoreConnectionType : NSObject {

	long long _technology;

}
-(id)description;
-(long long)technology;
-(id)initWithTechnology:(long long)arg1 ;
-(BOOL)isWWAN;
-(BOOL)isEdge;
-(BOOL)canUseWiFiDirectly;
-(long long)diagnosticConnectionType;
-(unsigned long long)aggregatorConnectionType;
@end

