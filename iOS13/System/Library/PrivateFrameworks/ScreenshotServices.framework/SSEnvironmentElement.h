/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
+(id)_metadataIdentifierBlacklist;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setMetadata:(SSHarvestedApplicationMetadata *)arg1 ;
-(SSHarvestedApplicationMetadata *)metadata;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(CGRect)rect;
-(void)setDocument:(SSHarvestedApplicationDocument *)arg1 ;
-(SSHarvestedApplicationDocument *)document;
-(BOOL)hasKeyboardFocus;
-(NSString *)loggableDescription;
-(NSString *)elementIdentifier;
-(BOOL)supportsMetadataCapture;
-(id)initWithDisplayLayoutElement:(id)arg1 ;
@end

