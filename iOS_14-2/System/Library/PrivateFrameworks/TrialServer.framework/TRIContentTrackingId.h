/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TRIContentTrackingId : NSObject <NSCopying> {

	NSString* _str;

}

@property (nonatomic,readonly) NSString * str;              //@synthesize str=_str - In the implementation block
+(id)contentIdWithStr:(id)arg1 ;
-(NSString *)str;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStr:(id)arg1 ;
-(BOOL)isEqualToContentId:(id)arg1 ;
-(id)copyWithReplacementStr:(id)arg1 ;
@end

