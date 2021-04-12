/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASyncAnchor;

@interface SASyncChunkAccepted : SABaseClientBoundCommand

@property (nonatomic,retain) SASyncAnchor * current; 
+(id)chunkAccepted;
+(id)chunkAcceptedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASyncAnchor *)current;
-(void)setCurrent:(SASyncAnchor *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

