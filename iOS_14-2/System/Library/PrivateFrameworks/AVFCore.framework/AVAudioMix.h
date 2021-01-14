/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAudioMixInternal, NSArray;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {

	AVAudioMixInternal* _audioMix;

}

@property (nonatomic,copy,readonly) NSArray * inputParameters; 
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setInputParameters:(NSArray *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)_audioMixInputParametersForTrackID:(int)arg1 ;
-(NSArray *)inputParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

