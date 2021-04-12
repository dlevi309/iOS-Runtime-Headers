/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SUBProgress *)progress;
-(SUBDescriptor *)descriptor;
-(void)setProgress:(SUBProgress *)arg1 ;
-(void)setDescriptor:(SUBDescriptor *)arg1 ;
@end

