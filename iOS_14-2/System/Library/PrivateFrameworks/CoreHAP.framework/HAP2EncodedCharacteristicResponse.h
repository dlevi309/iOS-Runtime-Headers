/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2EncodedCharacteristicResponse.h>
@class NSArray;


@protocol HAP2EncodedCharacteristicResponse <HAP2EncodedResponse>
@property (nonatomic,readonly) NSArray * characteristics; 
@required
-(NSArray *)characteristics;

@end


@class NSArray, NSString;

@interface HAP2EncodedCharacteristicResponse : HAP2LoggingObject <HAP2EncodedCharacteristicResponse> {

	NSArray* _responses;

}

@property (nonatomic,readonly) NSArray * characteristics; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEncrypted;
-(NSArray *)characteristics;
-(id)initWithCharacteristics:(id)arg1 ;
@end

