/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@class NSArray, NSString;

@interface EspressoProfilingLayerSupportInfo : NSObject {

	BOOL _supported;
	BOOL _exists;
	BOOL _has_perf_warning;
	BOOL _internal_layer;
	NSArray* _error_public;
	NSArray* _error_private;
	NSString* _type;

}

@property (retain) NSArray * error_public;               //@synthesize error_public=_error_public - In the implementation block
@property (retain) NSArray * error_private;              //@synthesize error_private=_error_private - In the implementation block
@property (assign) BOOL supported;                       //@synthesize supported=_supported - In the implementation block
@property (assign) BOOL exists;                          //@synthesize exists=_exists - In the implementation block
@property (assign) BOOL has_perf_warning;                //@synthesize has_perf_warning=_has_perf_warning - In the implementation block
@property (assign) BOOL internal_layer;                  //@synthesize internal_layer=_internal_layer - In the implementation block
@property (retain) NSString * type;                      //@synthesize type=_type - In the implementation block
-(BOOL)supported;
-(BOOL)exists;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setSupported:(BOOL)arg1 ;
-(void)setExists:(BOOL)arg1 ;
-(NSArray *)error_public;
-(void)setError_public:(NSArray *)arg1 ;
-(NSArray *)error_private;
-(void)setError_private:(NSArray *)arg1 ;
-(BOOL)has_perf_warning;
-(void)setHas_perf_warning:(BOOL)arg1 ;
-(BOOL)internal_layer;
-(void)setInternal_layer:(BOOL)arg1 ;
@end

