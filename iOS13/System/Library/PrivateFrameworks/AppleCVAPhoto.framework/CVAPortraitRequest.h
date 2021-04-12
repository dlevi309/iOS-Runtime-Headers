/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <libobjc.A.dylib/CVAPortraitRequest.h>
@class CVAMattingRequest;


@protocol CVAPortraitRequest <NSObject>
@property (readonly) CVAMattingRequest * mattingRequest; 
@property (readonly) CVBufferRef destinationColorPixelBuffer; 
@required
-(CVAMattingRequest *)mattingRequest;
-(CVBufferRef)destinationColorPixelBuffer;

@end


@protocol CVAPortraitGenericRequest;
@class CVAMattingRequest, NSData, NSString;

@interface CVAPortraitRequest : NSObject <CVAPortraitRequest> {

	int _relightingCondition;
	float _colorCubeIntensity;
	float _simulatedFocalRatio;
	float _sourceColorGain;
	float _sourceColorLux;
	CVAMattingRequest* _mattingRequest;
	CVBufferRef _destinationColorPixelBuffer;
	id<CVAPortraitGenericRequest> _parentGenericRequestFrom;
	id<CVAPortraitGenericRequest> _parentGenericRequestTo;
	NSData* _backgroundColorCube;
	NSData* _foregroundColorCube;

}

@property (readonly) int relightingCondition;                                           //@synthesize relightingCondition=_relightingCondition - In the implementation block
@property (readonly) NSData * backgroundColorCube;                                      //@synthesize backgroundColorCube=_backgroundColorCube - In the implementation block
@property (readonly) NSData * foregroundColorCube;                                      //@synthesize foregroundColorCube=_foregroundColorCube - In the implementation block
@property (readonly) float colorCubeIntensity;                                          //@synthesize colorCubeIntensity=_colorCubeIntensity - In the implementation block
@property (readonly) float simulatedFocalRatio;                                         //@synthesize simulatedFocalRatio=_simulatedFocalRatio - In the implementation block
@property (readonly) float sourceColorGain;                                             //@synthesize sourceColorGain=_sourceColorGain - In the implementation block
@property (readonly) float sourceColorLux;                                              //@synthesize sourceColorLux=_sourceColorLux - In the implementation block
@property (readonly) CVAMattingRequest * mattingRequest;                                //@synthesize mattingRequest=_mattingRequest - In the implementation block
@property (readonly) CVBufferRef destinationColorPixelBuffer;                           //@synthesize destinationColorPixelBuffer=_destinationColorPixelBuffer - In the implementation block
@property (retain) id<CVAPortraitGenericRequest> parentGenericRequestFrom;              //@synthesize parentGenericRequestFrom=_parentGenericRequestFrom - In the implementation block
@property (retain) id<CVAPortraitGenericRequest> parentGenericRequestTo;                //@synthesize parentGenericRequestTo=_parentGenericRequestTo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CVAMattingRequest *)mattingRequest;
-(CVBufferRef)destinationColorPixelBuffer;
-(id)initWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(CVBufferRef)arg2 backgroundColorCube:(id)arg3 foregroundColorCube:(id)arg4 colorCubeIntensity:(float)arg5 simulatedFocalRatio:(float)arg6 sourceColorGain:(float)arg7 sourceColorLux:(float)arg8 ;
-(id<CVAPortraitGenericRequest>)parentGenericRequestFrom;
-(void)setParentGenericRequestFrom:(id<CVAPortraitGenericRequest>)arg1 ;
-(id<CVAPortraitGenericRequest>)parentGenericRequestTo;
-(void)setParentGenericRequestTo:(id<CVAPortraitGenericRequest>)arg1 ;
-(int)relightingCondition;
-(NSData *)backgroundColorCube;
-(NSData *)foregroundColorCube;
-(float)colorCubeIntensity;
-(float)simulatedFocalRatio;
-(float)sourceColorGain;
-(float)sourceColorLux;
@end

