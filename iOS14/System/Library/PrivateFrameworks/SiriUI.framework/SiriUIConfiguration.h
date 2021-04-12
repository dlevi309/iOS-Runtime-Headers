/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SiriUIConfiguration : NSObject <NSCopying> {

	BOOL _isSystemHostedPresentation;
	BOOL _allowResizingBetweenModes;
	long long _flamesViewFidelity;
	long long _siriViewMode;

}

@property (nonatomic,readonly) long long flamesViewFidelity;                 //@synthesize flamesViewFidelity=_flamesViewFidelity - In the implementation block
@property (nonatomic,readonly) BOOL isSystemHostedPresentation;              //@synthesize isSystemHostedPresentation=_isSystemHostedPresentation - In the implementation block
@property (nonatomic,readonly) BOOL allowResizingBetweenModes;               //@synthesize allowResizingBetweenModes=_allowResizingBetweenModes - In the implementation block
@property (nonatomic,readonly) long long siriViewMode;                       //@synthesize siriViewMode=_siriViewMode - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)flamesViewFidelity;
-(id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(BOOL)arg2 allowResizingBetweenModes:(BOOL)arg3 siriViewMode:(long long)arg4 ;
-(BOOL)isSystemHostedPresentation;
-(long long)siriViewMode;
-(id)_NSStringFromSiriViewMode:(long long)arg1 ;
-(id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(BOOL)arg2 ;
-(BOOL)allowResizingBetweenModes;
@end

