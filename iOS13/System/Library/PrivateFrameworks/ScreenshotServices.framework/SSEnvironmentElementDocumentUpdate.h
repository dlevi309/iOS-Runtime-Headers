/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSString, SSHarvestedApplicationDocument, BSSettings;

@interface SSEnvironmentElementDocumentUpdate : NSObject <BSXPCCoding, SSLoggable> {

	NSString* _environmentElementIdentifier;
	SSHarvestedApplicationDocument* _document;

}

@property (nonatomic,copy) NSString * environmentElementIdentifier;                  //@synthesize environmentElementIdentifier=_environmentElementIdentifier - In the implementation block
@property (nonatomic,retain) SSHarvestedApplicationDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) BSSettings * bsSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setDocument:(SSHarvestedApplicationDocument *)arg1 ;
-(SSHarvestedApplicationDocument *)document;
-(NSString *)loggableDescription;
-(void)setEnvironmentElementIdentifier:(NSString *)arg1 ;
-(BSSettings *)bsSettings;
-(NSString *)environmentElementIdentifier;
@end

