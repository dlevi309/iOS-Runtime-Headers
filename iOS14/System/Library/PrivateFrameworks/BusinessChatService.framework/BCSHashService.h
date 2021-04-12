/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@interface BCSHashService : NSObject
+(BOOL)isValidFullHash:(id)arg1 ;
+(id)SHA256HashForInputString:(id)arg1 ;
+(long long)SHA256TruncatedHashForInputString:(id)arg1 includedBytes:(unsigned long long)arg2 ;
+(long long)truncatedHashForFullHash:(id)arg1 includedBytes:(unsigned long long)arg2 ;
+(id)_SHA256DataForInputString:(id)arg1 ;
+(long long)_truncatedHashForFullHashData:(id)arg1 includedBytes:(unsigned long long)arg2 ;
@end

