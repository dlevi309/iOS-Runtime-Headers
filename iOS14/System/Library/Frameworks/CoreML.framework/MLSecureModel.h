/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModeling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CoreMLModelSecurityProtocol;
@class NSXPCConnection, NSObject, MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLSecureModel : MLModel <MLModeling, NSSecureCoding> {

	NSXPCConnection* _connectionToModelSecurityService;
	NSObject*<CoreMLModelSecurityProtocol> _secureModelProxy;

}

@property (nonatomic,retain) NSXPCConnection * connectionToModelSecurityService;                   //@synthesize connectionToModelSecurityService=_connectionToModelSecurityService - In the implementation block
@property (nonatomic,retain) NSObject*<CoreMLModelSecurityProtocol> secureModelProxy;              //@synthesize secureModelProxy=_secureModelProxy - In the implementation block
@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
+(BOOL)supportsSecureCoding;
+(id)sandboxExtensionPathsForModelURL:(id)arg1 ;
+(id)sandboxExtensionTokenForModelURL:(id)arg1 ;
+(id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 decryptCredential:(id)arg3 error:(id*)arg4 ;
+(id)modelWithContentsOfURL:(id)arg1 decryptCredential:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)predictionsFromBatch:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSXPCConnection *)connectionToModelSecurityService;
-(NSObject*<CoreMLModelSecurityProtocol>)secureModelProxy;
-(void)setConnectionToModelSecurityService:(NSXPCConnection *)arg1 ;
-(void)setSecureModelProxy:(NSObject*<CoreMLModelSecurityProtocol>)arg1 ;
@end

