/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSDictionary, NSMutableArray, LogEntry;

@interface RevisionLogInclusionProofResponse : GPBMessage

@property (readonly) NSDictionary * metadata; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * logEntryArray; 
@property (nonatomic,readonly) unsigned long long logEntryArray_Count; 
@property (nonatomic,retain) LogEntry * topLevelTreeEntry; 
@property (assign,nonatomic) BOOL hasTopLevelTreeEntry; 
+(id)descriptor;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
@end

