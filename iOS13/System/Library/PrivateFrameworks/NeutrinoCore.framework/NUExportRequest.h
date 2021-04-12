/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(id)initWithComposition:(id)arg1 ;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id<NUScalePolicy>)scalePolicy;
-(id)initWithComposition:(id)arg1 destinationURL:(id)arg2 ;
@end

