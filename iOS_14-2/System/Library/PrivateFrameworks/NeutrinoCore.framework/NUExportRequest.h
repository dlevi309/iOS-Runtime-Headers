/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;
@class NSURL;

@interface NUExportRequest : NURenderRequest {

	NSURL* _destinationURL;
	id<NUScalePolicy> _scalePolicy;

}

@property (copy) NSURL * destinationURL;                       //@synthesize destinationURL=_destinationURL - In the implementation block
@property (retain) id<NUScalePolicy> scalePolicy;              //@synthesize scalePolicy=_scalePolicy - In the implementation block
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NUScalePolicy>)scalePolicy;
-(id)initWithComposition:(id)arg1 destinationURL:(id)arg2 ;
@end

