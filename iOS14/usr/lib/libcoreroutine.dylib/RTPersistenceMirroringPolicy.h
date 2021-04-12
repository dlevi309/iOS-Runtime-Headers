/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTTokenBucket;

@interface RTPersistenceMirroringPolicy : NSObject <NSCopying> {

	long long _qualityOfService;
	RTTokenBucket* _tokenBucket;

}

@property (nonatomic,retain) RTTokenBucket * tokenBucket;                    //@synthesize tokenBucket=_tokenBucket - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                   //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) BOOL allowsMirroringViaCellular; 
@property (nonatomic,readonly) BOOL mirroringOperationAllowed; 
-(id)init;
-(double)timeIntervalUntilOperationAllowed;
-(id)description;
-(long long)qualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithQualityOfService:(long long)arg1 ;
-(BOOL)mirroringOperationAllowed;
-(BOOL)allowsMirroringViaCellular;
-(id)initWithQualityOfService:(long long)arg1 tokenBucket:(id)arg2 ;
-(RTTokenBucket *)tokenBucket;
-(id)qualityOfServiceToString:(long long)arg1 ;
-(void)setTokenBucket:(RTTokenBucket *)arg1 ;
@end

