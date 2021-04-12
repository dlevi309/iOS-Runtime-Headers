/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentSupport.framework/PromotedContentSupport
*/

#import <AdPlatformsCommon/APXPCActionRequester.h>

@interface PCSupportRequester : APXPCActionRequester
+(id)machService;
+(BOOL)canShareConnection;
-(void)connectionInvalidated;
-(id)init;
-(id)remoteObjectInterface;
-(void)connectionInterrupted;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 privateSegment:(BOOL)arg3 ;
-(id)fetchSegmentData;
@end

