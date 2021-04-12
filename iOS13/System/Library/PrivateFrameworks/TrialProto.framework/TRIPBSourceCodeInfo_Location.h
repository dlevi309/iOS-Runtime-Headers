/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBInt32Array, NSString, NSMutableArray;

@interface TRIPBSourceCodeInfo_Location : TRIPBMessage

@property (nonatomic,retain) TRIPBInt32Array * pathArray; 
@property (nonatomic,readonly) unsigned long long pathArray_Count; 
@property (nonatomic,retain) TRIPBInt32Array * spanArray; 
@property (nonatomic,readonly) unsigned long long spanArray_Count; 
@property (nonatomic,copy) NSString * leadingComments; 
@property (assign,nonatomic) BOOL hasLeadingComments; 
@property (nonatomic,copy) NSString * trailingComments; 
@property (assign,nonatomic) BOOL hasTrailingComments; 
@property (nonatomic,retain) NSMutableArray * leadingDetachedCommentsArray; 
@property (nonatomic,readonly) unsigned long long leadingDetachedCommentsArray_Count; 
+(id)descriptor;
@end

