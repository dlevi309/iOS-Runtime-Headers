/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/_DKObjectMO.h>

@class NSString, _DKObjectMO, NSSet, _DKStructuredMetadataMO;

@interface _DKEventMO : _DKObjectMO

@property (assign,nonatomic) double endDate; 
@property (assign,nonatomic) short endDayOfWeek; 
@property (assign,nonatomic) int endSecondOfDay; 
@property (assign,nonatomic) double startDate; 
@property (assign,nonatomic) short startDayOfWeek; 
@property (assign,nonatomic) int startSecondOfDay; 
@property (nonatomic,retain) NSString * streamName; 
@property (assign,nonatomic) double valueDouble; 
@property (assign,nonatomic) long long valueInteger; 
@property (nonatomic,retain) NSString * valueString; 
@property (assign,nonatomic) short valueClass; 
@property (assign,nonatomic) long long valueTypeCode; 
@property (assign,nonatomic) long long secondsFromGMT; 
@property (assign,nonatomic) double confidence; 
@property (nonatomic,retain) _DKObjectMO * value; 
@property (assign,nonatomic) BOOL shouldSync; 
@property (assign,nonatomic) long long compatibilityVersion; 
@property (assign,nonatomic) BOOL hasCustomMetadata; 
@property (nonatomic,retain) NSSet * customMetadata; 
@property (assign,nonatomic) BOOL hasStructuredMetadata; 
@property (nonatomic,retain) _DKStructuredMetadataMO * structuredMetadata; 
@end

