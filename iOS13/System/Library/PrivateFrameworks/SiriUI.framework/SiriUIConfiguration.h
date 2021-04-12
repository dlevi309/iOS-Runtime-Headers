/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SiriUIConfiguration : NSObject <NSCopying> {

	BOOL _isSystemHostedPresentation;
	long long _flamesViewFidelity;
	long long _siriViewMode;

}

@property (nonatomic,readonly) long long flamesViewFidelity;                 //@synthesize flamesViewFidelity=_flamesViewFidelity - In the implementation block
@property (nonatomic,readonly) BOOL isSystemHostedPresentation;              //@synthesize isSystemHostedPresentation=_isSystemHostedPresentation - In the implementation block
@property (nonatomic,readonly) long long siriViewMode;                       //@synthesize siriViewMode=_siriViewMode - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(BOOL)arg2 siriViewMode:(long long)arg3 ;
-(long long)flamesViewFidelity;
-(BOOL)isSystemHostedPresentation;
-(long long)siriViewMode;
-(id)_NSStringFromSiriViewMode:(long long)arg1 ;
-(id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(BOOL)arg2 ;
@end

