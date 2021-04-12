/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRResponseMessage.h>

@class AKDevice;

@interface TRSetupProxyDeviceResponse : TRResponseMessage {

	AKDevice* _proxyDevice;

}

@property (nonatomic,retain) AKDevice * proxyDevice;              //@synthesize proxyDevice=_proxyDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setProxyDevice:(AKDevice *)arg1 ;
-(AKDevice *)proxyDevice;
@end

