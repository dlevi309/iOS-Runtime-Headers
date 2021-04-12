/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(SSHarvestedApplicationMetadata *)metadata;
-(NSString *)loggableDescription;
-(void)setEnvironmentElementIdentifier:(NSString *)arg1 ;
-(BSSettings *)bsSettings;
-(NSString *)environmentElementIdentifier;
@end

