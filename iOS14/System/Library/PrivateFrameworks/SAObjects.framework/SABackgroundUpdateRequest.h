/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@interface SABackgroundUpdateRequest : SAStartRequest

@property (nonatomic,retain) id<SAAceSerializable> attachment; 
+(id)backgroundUpdateRequest;
+(id)backgroundUpdateRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id<SAAceSerializable>)attachment;
-(void)setAttachment:(id<SAAceSerializable>)arg1 ;
@end

