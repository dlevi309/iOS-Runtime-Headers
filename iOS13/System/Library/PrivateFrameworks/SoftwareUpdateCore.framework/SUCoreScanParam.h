/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, SUCoreDescriptor;

@interface SUCoreScanParam : NSObject <NSSecureCoding> {

	long long _resultCode;
	NSError* _error;
	SUCoreDescriptor* _descriptor;
	SUCoreDescriptor* _fallbackDescriptor;

}

@property (assign,nonatomic) long long resultCode;                               //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * descriptor;                      //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * fallbackDescriptor;              //@synthesize fallbackDescriptor=_fallbackDescriptor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(SUCoreDescriptor *)fallbackDescriptor;
-(SUCoreDescriptor *)descriptor;
-(void)setDescriptor:(SUCoreDescriptor *)arg1 ;
-(id)summary;
-(void)setResultCode:(long long)arg1 ;
-(long long)resultCode;
-(void)setFallbackDescriptor:(SUCoreDescriptor *)arg1 ;
-(id)initWithResult:(long long)arg1 withError:(id)arg2 ;
-(id)initWithDescriptor:(id)arg1 withFallbackDescriptor:(id)arg2 ;
@end

