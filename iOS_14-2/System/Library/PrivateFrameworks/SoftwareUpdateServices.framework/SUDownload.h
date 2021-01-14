/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUDescriptor, SUOperationProgress, SUDownloadOptions, SUDownloadMetadata;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying> {

	SUDescriptor* _descriptor;
	SUOperationProgress* _progress;
	SUDownloadOptions* _downloadOptions;
	SUDownloadMetadata* _metadata;

}

@property (nonatomic,retain) SUDescriptor * descriptor;                        //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) SUOperationProgress * progress;                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) SUDownloadOptions * downloadOptions;              //@synthesize downloadOptions=_downloadOptions - In the implementation block
@property (nonatomic,retain) SUDownloadMetadata * metadata;                    //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(SUOperationProgress *)progress;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDownloadOptions:(SUDownloadOptions *)arg1 ;
-(SUDownloadOptions *)downloadOptions;
-(void)setMetadata:(SUDownloadMetadata *)arg1 ;
-(SUDescriptor *)descriptor;
-(id)description;
-(void)setProgress:(SUOperationProgress *)arg1 ;
-(void)setDescriptor:(SUDescriptor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SUDownloadMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)allowCellularDownload;
-(unsigned long long)totalSpaceConsumed;
-(BOOL)isValidDownload;
@end

