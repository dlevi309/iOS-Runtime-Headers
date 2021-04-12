/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2EncodedResponseThread.h>
#import <libobjc.A.dylib/HAP2EncodedListPairingsResponse.h>

@class NSArray, NSString;

@interface HAP2EncodedListPairingsResponseThread : HAP2EncodedResponseThread <HAP2EncodedListPairingsResponse> {

	NSArray* _pairings;

}

@property (nonatomic,readonly) NSArray * pairings;                             //@synthesize pairings=_pairings - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBTLEResponse:(id)arg1 pairings:(id)arg2 ;
-(NSArray *)pairings;
@end

