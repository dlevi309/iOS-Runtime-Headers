/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSDictionary, NSMutableArray;

@interface ConsistencyProofResponse : GPBMessage

@property (readonly) NSDictionary * metadata; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * responsesArray; 
@property (nonatomic,readonly) unsigned long long responsesArray_Count; 
+(id)descriptor;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
@end

