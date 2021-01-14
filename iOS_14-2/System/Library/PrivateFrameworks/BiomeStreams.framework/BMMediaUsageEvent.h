/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventBinaryStepping.h>
#import <libobjc.A.dylib/BMEventTimeElapsing.h>
#import <libobjc.A.dylib/BMEventAppAssociating.h>

@class NSURL, NSString, NSDateInterval;

@interface BMMediaUsageEvent : BMEventBase <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating> {

	BOOL _usageTrusted;
	NSURL* _URL;
	NSURL* _mediaURL;

}

@property (nonatomic,copy) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSURL * mediaURL;                                       //@synthesize mediaURL=_mediaURL - In the implementation block
@property (assign,getter=isUsageTrusted,nonatomic) BOOL usageTrusted;              //@synthesize usageTrusted=_usageTrusted - In the implementation block
@property (assign,getter=isStarting,nonatomic) BOOL starting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDateInterval * dateInterval; 
@property (assign,nonatomic) double absoluteTimestamp; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * bundleID; 
-(id)init;
-(BOOL)isValidWithContext:(id)arg1 error:(id*)arg2 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)mediaURL;
-(NSString *)description;
-(BOOL)isUsageTrusted;
-(void)setMediaURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(id)initWithBegin:(BOOL)arg1 bundleID:(id)arg2 URL:(id)arg3 mediaURL:(id)arg4 usageTrusted:(BOOL)arg5 timestamp:(id)arg6 ;
-(void)setUsageTrusted:(BOOL)arg1 ;
-(id)initWithBegin:(BOOL)arg1 bundleID:(id)arg2 URL:(id)arg3 mediaURL:(id)arg4 timestamp:(id)arg5 ;
@end

