/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@protocol OS_dispatch_queue;
@class NUComposition, NSObject, NUColorSpace, NSString, NUImageDataRequest;

@interface NUColorSampler : NSObject <NUTimeBased> {

	BOOL _shouldCoalesceUpdates;
	NUComposition* _composition;
	NSObject*<OS_dispatch_queue> _responseQueue;
	long long _sampleRadius;
	NUColorSpace* _colorSpace;
	NSString* _name;
	NUImageDataRequest* _request;

}

@property (nonatomic,readonly) NUImageDataRequest * request;                          //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NUComposition * composition;                               //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
@property (assign,nonatomic) long long sampleRadius;                                  //@synthesize sampleRadius=_sampleRadius - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;                               //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) BOOL shouldCoalesceUpdates;                              //@synthesize shouldCoalesceUpdates=_shouldCoalesceUpdates - In the implementation block
@property (nonatomic,retain) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_NU6 time; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)cancel;
-(SCD_Struct_NU6)time;
-(NUColorSpace *)colorSpace;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(void)setTime:(SCD_Struct_NU6)arg1 ;
-(NUImageDataRequest *)request;
-(NUComposition *)composition;
-(id)initWithComposition:(id)arg1 ;
-(void)setComposition:(NUComposition *)arg1 ;
-(void)setResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(id)_pipelineFilters;
-(void)setShouldCoalesceUpdates:(BOOL)arg1 ;
-(BOOL)shouldCoalesceUpdates;
-(id)initWithComposition:(id)arg1 responseQueue:(id)arg2 ;
-(void)sampleColorAt:(SCD_Struct_NU7)arg1 completion:(/*^block*/id)arg2 ;
-(void)configureRequest:(id)arg1 forSamplingAtPoint:(SCD_Struct_NU7)arg2 ;
-(long long)sampleRadius;
-(void)setSampleRadius:(long long)arg1 ;
@end

