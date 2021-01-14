/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>
#import <SignpostSupport/SignpostSerializable.h>

@class NSArray, NSString;

@interface SignpostSupportCompositorInterval : SignpostAnimationSubInterval <SignpostSerializable> {

	NSArray* _contributingPids;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * contributingPids;              //@synthesize contributingPids=_contributingPids - In the implementation block
+(id)serializationTypeNumber;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContributingPids:(NSArray *)arg1 ;
-(id)initWithStartContinuousTime:(unsigned long long)arg1 endContinuousTime:(unsigned long long)arg2 timebaseRatio:(double)arg3 contributingPids:(id)arg4 ;
-(id)serializeableDictionaryWithShouldRedact:(BOOL)arg1 ;
-(id)humanReadableType;
-(id)humanReadableDictionaryRepresentation;
-(BOOL)isEqualToSignpostSupportCompositorInterval:(id)arg1 ;
-(NSArray *)contributingPids;
@end

