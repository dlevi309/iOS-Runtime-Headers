/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NUPriority *)priority;
-(void)setPriority:(NUPriority *)arg1 ;
-(NUColorSpace *)colorSpace;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NSString *)pairingIdentifier;
-(void)setPairingIdentifier:(NSString *)arg1 ;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id<NUScalePolicy>)scalePolicy;
@end

