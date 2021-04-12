/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2EncodedCharacteristicRequest.h>

@class NSArray, NSString;

@interface HAP2ControllerReadRequest : HAP2LoggingObject <HAP2EncodedCharacteristicRequest> {

	NSArray* _originalCharacteristics;

}

@property (nonatomic,readonly) NSArray * originalCharacteristics;              //@synthesize originalCharacteristics=_originalCharacteristics - In the implementation block
@property (nonatomic,readonly) NSArray * characteristics; 
@property (nonatomic,readonly) unsigned long long type; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serialize;
-(BOOL)isEncrypted;
-(unsigned long long)type;
-(NSArray *)characteristics;
-(id)initWithCharacteristics:(id)arg1 ;
-(NSArray *)originalCharacteristics;
@end

