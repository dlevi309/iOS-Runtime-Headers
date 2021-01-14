/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SUBDescriptor, SUBProgress;

@interface SUBDownload : NSObject <NSSecureCoding> {

	SUBDescriptor* _descriptor;
	SUBProgress* _progress;

}

@property (nonatomic,retain) SUBDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) SUBProgress * progress;                  //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)downloadWithDescriptor:(id)arg1 andProgress:(id)arg2 ;
-(SUBProgress *)progress;
-(void)encodeWithCoder:(id)arg1 ;
-(SUBDescriptor *)descriptor;
-(id)description;
-(id)copy;
-(void)setProgress:(SUBProgress *)arg1 ;
-(void)setDescriptor:(SUBDescriptor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

