/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CWFXPCParameters, NSDate, NSDictionary;

@interface CWFXPCRequest : NSObject <NSCopying> {

	long long _type;
	CWFXPCParameters* _XPCParameters;
	NSDate* _receivedAt;
	NSDictionary* _info;
	/*^block*/id _response;

}

@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) CWFXPCParameters * XPCParameters;              //@synthesize XPCParameters=_XPCParameters - In the implementation block
@property (nonatomic,copy) NSDate * receivedAt;                           //@synthesize receivedAt=_receivedAt - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                           //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id response;                                   //@synthesize response=_response - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSDictionary *)info;
-(id)response;
-(void)setResponse:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(NSDate *)receivedAt;
-(void)setXPCParameters:(CWFXPCParameters *)arg1 ;
-(void)setReceivedAt:(NSDate *)arg1 ;
-(CWFXPCParameters *)XPCParameters;
@end

