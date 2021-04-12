/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <libobjc.A.dylib/CVAPortraitRequest.h>

@protocol CVAPortraitGenericRequest;
@class CVAMattingRequest, NSData, NSString;

@interface CVAPortraitRequest_StageLight : NSObject <CVAPortraitRequest> {

	float _vignetteIntensity;
	float _stageLightIntensity;
	CVAMattingRequest* _mattingRequest;
	CVBufferRef _destinationColorPixelBuffer;
	NSData* _proxyCubeData;
	NSData* _cubeData;
	id<CVAPortraitGenericRequest> _parentGenericRequestFrom;
	id<CVAPortraitGenericRequest> _parentGenericRequestTo;

}

@property (readonly) CVAMattingRequest * mattingRequest;                                //@synthesize mattingRequest=_mattingRequest - In the implementation block
@property (readonly) CVBufferRef destinationColorPixelBuffer;                           //@synthesize destinationColorPixelBuffer=_destinationColorPixelBuffer - In the implementation block
@property (readonly) NSData * proxyCubeData;                                            //@synthesize proxyCubeData=_proxyCubeData - In the implementation block
@property (readonly) NSData * cubeData;                                                 //@synthesize cubeData=_cubeData - In the implementation block
@property (readonly) float vignetteIntensity;                                           //@synthesize vignetteIntensity=_vignetteIntensity - In the implementation block
@property (readonly) float stageLightIntensity;                                         //@synthesize stageLightIntensity=_stageLightIntensity - In the implementation block
@property (retain) id<CVAPortraitGenericRequest> parentGenericRequestFrom;              //@synthesize parentGenericRequestFrom=_parentGenericRequestFrom - In the implementation block
@property (retain) id<CVAPortraitGenericRequest> parentGenericRequestTo;                //@synthesize parentGenericRequestTo=_parentGenericRequestTo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)cubeData;
-(void)dealloc;
-(CVAMattingRequest *)mattingRequest;
-(CVBufferRef)destinationColorPixelBuffer;
-(id<CVAPortraitGenericRequest>)parentGenericRequestFrom;
-(void)setParentGenericRequestFrom:(id<CVAPortraitGenericRequest>)arg1 ;
-(id<CVAPortraitGenericRequest>)parentGenericRequestTo;
-(void)setParentGenericRequestTo:(id<CVAPortraitGenericRequest>)arg1 ;
-(id)initWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(CVBufferRef)arg2 proxyCubeData:(id)arg3 cubeData:(id)arg4 vignetteIntensity:(float)arg5 stageLightIntensity:(float)arg6 ;
-(NSData *)proxyCubeData;
-(float)vignetteIntensity;
-(float)stageLightIntensity;
@end

