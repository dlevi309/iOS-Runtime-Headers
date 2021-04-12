/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@protocol NUScalePolicy;
@class NUPriority, NUColorSpace, NSString;

@interface PICompositionExporterOptions : NSObject {

	NUPriority* _priority;
	NUColorSpace* _colorSpace;
	NSString* _pairingIdentifier;
	id<NUScalePolicy> _scalePolicy;

}

@property (retain) NUPriority * priority;                      //@synthesize priority=_priority - In the implementation block
@property (retain) NUColorSpace * colorSpace;                  //@synthesize colorSpace=_colorSpace - In the implementation block
@property (copy) NSString * pairingIdentifier;                 //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (retain) id<NUScalePolicy> scalePolicy;              //@synthesize scalePolicy=_scalePolicy - In the implementation block
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NSString *)pairingIdentifier;
-(NUColorSpace *)colorSpace;
-(void)setPairingIdentifier:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(NUPriority *)priority;
-(void)setPriority:(NUPriority *)arg1 ;
-(id<NUScalePolicy>)scalePolicy;
@end

