/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)qualityOfService;
-(id)initWithQualityOfService:(long long)arg1 ;
-(double)timeIntervalUntilOperationAllowed;
-(BOOL)mirroringOperationAllowed;
-(BOOL)allowsMirroringViaCellular;
-(id)initWithQualityOfService:(long long)arg1 tokenBucket:(id)arg2 ;
-(RTTokenBucket *)tokenBucket;
-(id)qualityOfServiceToString:(long long)arg1 ;
-(void)setTokenBucket:(RTTokenBucket *)arg1 ;
@end

