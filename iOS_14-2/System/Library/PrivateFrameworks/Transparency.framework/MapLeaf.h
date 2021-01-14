/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class NSObject, NSMutableArray;

@interface MapLeaf : GPBMessage <TransparencyVerifiable>

@property (retain) NSObject * verifier; 
@property (nonatomic,retain) NSMutableArray * accountsArray; 
@property (nonatomic,readonly) unsigned long long accountsArray_Count; 
+(id)descriptor;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(id)recordForAccountId:(id)arg1 deviceIdVRFOutput:(id)arg2 appVersion:(unsigned long long)arg3 clientDataVRFoutput:(id)arg4 ;
@end

