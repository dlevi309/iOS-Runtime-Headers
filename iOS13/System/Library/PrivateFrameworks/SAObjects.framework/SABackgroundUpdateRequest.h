/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@interface SABackgroundUpdateRequest : SAStartRequest

@property (nonatomic,retain) id<SAAceSerializable> attachment; 
+(id)backgroundUpdateRequest;
+(id)backgroundUpdateRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id<SAAceSerializable>)attachment;
-(void)setAttachment:(id<SAAceSerializable>)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

