/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class GPBUInt64Array;

@interface RevisionLogInclusionProofRequest : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int application; 
@property (assign,nonatomic) int logType; 
@property (nonatomic,retain) GPBUInt64Array * revisionArray; 
@property (nonatomic,readonly) unsigned long long revisionArray_Count; 
+(id)descriptor;
@end

