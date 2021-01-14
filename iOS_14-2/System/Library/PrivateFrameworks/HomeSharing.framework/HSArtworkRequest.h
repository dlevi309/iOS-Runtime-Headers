/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/HSRequest.h>

@interface HSArtworkRequest : HSRequest
+(id)requestWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 size:(CGSize)arg3 ;
-(BOOL)isConcurrent;
-(id)initWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 size:(CGSize)arg3 ;
-(BOOL)acceptsGzipEncoding;
@end

