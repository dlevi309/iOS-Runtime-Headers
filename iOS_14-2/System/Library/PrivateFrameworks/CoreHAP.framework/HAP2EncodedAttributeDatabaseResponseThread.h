/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2EncodedResponseThread.h>
#import <libobjc.A.dylib/HAP2EncodedAttributeDatabaseResponse.h>

@class NSDictionary, NSString;

@interface HAP2EncodedAttributeDatabaseResponseThread : HAP2EncodedResponseThread <HAP2EncodedAttributeDatabaseResponse> {

	NSDictionary* _attributeDatabase;

}

@property (nonatomic,readonly) NSDictionary * attributeDatabase;               //@synthesize attributeDatabase=_attributeDatabase - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBTLEResponse:(id)arg1 attributeDatabase:(id)arg2 ;
-(NSDictionary *)attributeDatabase;
@end

