/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRResponseMessage.h>

@class AKDevice;

@interface TRSetupProxyDeviceResponse : TRResponseMessage {

	AKDevice* _proxyDevice;

}

@property (nonatomic,retain) AKDevice * proxyDevice;              //@synthesize proxyDevice=_proxyDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setProxyDevice:(AKDevice *)arg1 ;
-(AKDevice *)proxyDevice;
@end

