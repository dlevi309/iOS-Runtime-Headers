/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSData, NSDictionary, NSArray;

@interface PKPaymentInstructions : NSObject {

	long long _version;
	NSData* _instructionsData;
	NSData* _signatureData;
	NSData* _fortifiedInstructionsData;
	NSData* _fortifiedSignatureData;
	NSDictionary* _instructionsDictionary;

}

@property (nonatomic,retain) NSDictionary * instructionsDictionary;              //@synthesize instructionsDictionary=_instructionsDictionary - In the implementation block
@property (nonatomic,retain) NSData * instructionsData;                          //@synthesize instructionsData=_instructionsData - In the implementation block
@property (nonatomic,retain) NSData * signatureData;                             //@synthesize signatureData=_signatureData - In the implementation block
@property (nonatomic,retain) NSData * fortifiedInstructionsData;                 //@synthesize fortifiedInstructionsData=_fortifiedInstructionsData - In the implementation block
@property (nonatomic,retain) NSData * fortifiedSignatureData;                    //@synthesize fortifiedSignatureData=_fortifiedSignatureData - In the implementation block
@property (nonatomic,readonly) long long version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * allImageKeys; 
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSData *)signatureData;
-(CGImageRef)imageForKey:(id)arg1 ;
-(NSArray *)allImageKeys;
-(id)_imageDataForImageWithKey:(id)arg1 format:(id*)arg2 ;
-(CGDataProviderRef)_createImageDataProviderForImageKey:(id)arg1 ;
-(NSData *)instructionsData;
-(NSData *)fortifiedInstructionsData;
-(NSData *)fortifiedSignatureData;
-(void)_pruneDirectoryAtURL:(id)arg1 ;
-(BOOL)archiveToDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(void)setInstructionsData:(NSData *)arg1 ;
-(void)setSignatureData:(NSData *)arg1 ;
-(void)setFortifiedInstructionsData:(NSData *)arg1 ;
-(void)setFortifiedSignatureData:(NSData *)arg1 ;
-(NSDictionary *)instructionsDictionary;
-(void)setInstructionsDictionary:(NSDictionary *)arg1 ;
-(long long)version;
@end

