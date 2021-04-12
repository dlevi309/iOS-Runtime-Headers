/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class NSMutableArray;

@interface MapLeaf : GPBMessage <TransparencyVerifiable>

@property (nonatomic,retain) NSMutableArray * accountsArray; 
@property (nonatomic,readonly) unsigned long long accountsArray_Count; 
+(id)descriptor;
-(BOOL)verifyWithError:(id*)arg1 ;
-(id)recordForAccountId:(id)arg1 deviceIdVRFOutput:(id)arg2 appVersion:(unsigned long long)arg3 clientDataVRFoutput:(id)arg4 ;
@end

