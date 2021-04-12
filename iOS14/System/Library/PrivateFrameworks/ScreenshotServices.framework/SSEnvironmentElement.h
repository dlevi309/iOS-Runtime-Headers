/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSString, SSHarvestedApplicationMetadata, SSHarvestedApplicationDocument;

@interface SSEnvironmentElement : NSObject <NSCopying, BSXPCCoding, SSLoggable> {

	CGRect _rect;
	NSString* _bundleIdentifier;
	NSString* _elementIdentifier;
	NSString* _identifier;
	BOOL _hasKeyboardFocus;
	SSHarvestedApplicationMetadata* _metadata;
	SSHarvestedApplicationDocument* _document;

}

@property (nonatomic,readonly) CGRect rect; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * elementIdentifier; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasKeyboardFocus; 
@property (nonatomic,readonly) BOOL supportsMetadataCapture; 
@property (nonatomic,retain) SSHarvestedApplicationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) SSHarvestedApplicationDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) BOOL isAppLauncher; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
+(id)_metadataIdentifierBlocklist;
-(CGRect)rect;
-(id)init;
-(void)setDocument:(SSHarvestedApplicationDocument *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setMetadata:(SSHarvestedApplicationMetadata *)arg1 ;
-(BOOL)hasKeyboardFocus;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)identifier;
-(SSHarvestedApplicationDocument *)document;
-(SSHarvestedApplicationMetadata *)metadata;
-(NSString *)elementIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)loggableDescription;
-(BOOL)supportsMetadataCapture;
-(id)initWithDisplayLayoutElement:(id)arg1 ;
-(BOOL)isAppLauncher;
@end

