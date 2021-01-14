/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVMessageTransformerProtocol.h>

@class NSString;

@interface AVAirMessageResponse : NSObject <AVMessageTransformerProtocol> {

	long long _status;
	NSString* _localizedDescription;

}

@property (nonatomic,readonly) long long status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseWithParts:(id)arg1 ;
+(id)messageWithVersion:(id)arg1 headers:(id)arg2 bodyData:(id)arg3 ;
+(id)messageWithParts:(id)arg1 ;
-(NSString *)description;
-(NSString *)localizedDescription;
-(id)initWithStatus:(long long)arg1 localizedDescription:(id)arg2 ;
-(id)headersForContentLength:(long long)arg1 compression:(id)arg2 ;
-(id)bodyData;
-(id)messageDataRepresentation;
-(long long)status;
@end

