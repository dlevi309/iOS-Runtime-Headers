/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSString, SSHarvestedApplicationMetadata, BSSettings;

@interface SSEnvironmentElementMetadataUpdate : NSObject <BSXPCCoding, SSLoggable> {

	NSString* _environmentElementIdentifier;
	SSHarvestedApplicationMetadata* _metadata;

}

@property (nonatomic,copy) NSString * environmentElementIdentifier;                  //@synthesize environmentElementIdentifier=_environmentElementIdentifier - In the implementation block
@property (nonatomic,retain) SSHarvestedApplicationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BSSettings * bsSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
-(void)setMetadata:(SSHarvestedApplicationMetadata *)arg1 ;
-(SSHarvestedApplicationMetadata *)metadata;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)loggableDescription;
-(void)setEnvironmentElementIdentifier:(NSString *)arg1 ;
-(BSSettings *)bsSettings;
-(NSString *)environmentElementIdentifier;
@end

