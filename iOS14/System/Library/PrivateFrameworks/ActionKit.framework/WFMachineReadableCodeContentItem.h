/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class NSString, WFMachineReadableCode;

@interface WFMachineReadableCodeContentItem : WFGenericFileContentItem <WFContentItemClass> {

	BOOL _prefersImage;
	NSString* _errorCorrectionLevel;

}

@property (assign,nonatomic) BOOL prefersImage;                                 //@synthesize prefersImage=_prefersImage - In the implementation block
@property (nonatomic,retain) NSString * errorCorrectionLevel;                   //@synthesize errorCorrectionLevel=_errorCorrectionLevel - In the implementation block
@property (nonatomic,readonly) WFMachineReadableCode * codeObject; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)qrCodeItemWithString:(id)arg1 errorCorrectionLevel:(id)arg2 ;
-(NSString *)errorCorrectionLevel;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)preferredFileType;
-(id)preferredObjectType;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(WFMachineReadableCode *)codeObject;
-(id)generateImageOfSize:(CGSize)arg1 withErrorCorrectionLevel:(id)arg2 error:(id*)arg3 ;
-(BOOL)prefersImage;
-(void)setPrefersImage:(BOOL)arg1 ;
-(void)setErrorCorrectionLevel:(NSString *)arg1 ;
@end

