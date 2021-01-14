/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, SUCoreDescriptor;

@interface SUCoreScanParam : NSObject <NSSecureCoding> {

	long long _resultCode;
	NSError* _error;
	SUCoreDescriptor* _descriptor;
	SUCoreDescriptor* _fallbackDescriptor;
	SUCoreDescriptor* _majorPrimaryDescriptor;
	SUCoreDescriptor* _majorSecondaryDescriptor;
	SUCoreDescriptor* _minorPrimaryDescriptor;
	SUCoreDescriptor* _minorSecondaryDescriptor;

}

@property (assign,nonatomic) long long resultCode;                                     //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,retain) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * descriptor;                            //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * fallbackDescriptor;                    //@synthesize fallbackDescriptor=_fallbackDescriptor - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * majorPrimaryDescriptor;                //@synthesize majorPrimaryDescriptor=_majorPrimaryDescriptor - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * majorSecondaryDescriptor;              //@synthesize majorSecondaryDescriptor=_majorSecondaryDescriptor - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * minorPrimaryDescriptor;                //@synthesize minorPrimaryDescriptor=_minorPrimaryDescriptor - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * minorSecondaryDescriptor;              //@synthesize minorSecondaryDescriptor=_minorSecondaryDescriptor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(long long)resultCode;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setResultCode:(long long)arg1 ;
-(NSError *)error;
-(SUCoreDescriptor *)descriptor;
-(id)description;
-(id)summary;
-(void)setDescriptor:(SUCoreDescriptor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SUCoreDescriptor *)fallbackDescriptor;
-(SUCoreDescriptor *)majorPrimaryDescriptor;
-(SUCoreDescriptor *)majorSecondaryDescriptor;
-(SUCoreDescriptor *)minorPrimaryDescriptor;
-(SUCoreDescriptor *)minorSecondaryDescriptor;
-(id)initWithResult:(long long)arg1 withError:(id)arg2 ;
-(id)initWithDescriptor:(id)arg1 withFallbackDescriptor:(id)arg2 ;
-(id)initWithMajorPrimaryDescriptor:(id)arg1 majorSecondaryDescriptor:(id)arg2 minorPrimaryDescriptor:(id)arg3 minorSecondaryDescriptor:(id)arg4 ;
-(void)setFallbackDescriptor:(SUCoreDescriptor *)arg1 ;
-(void)setMajorPrimaryDescriptor:(SUCoreDescriptor *)arg1 ;
-(void)setMajorSecondaryDescriptor:(SUCoreDescriptor *)arg1 ;
-(void)setMinorPrimaryDescriptor:(SUCoreDescriptor *)arg1 ;
-(void)setMinorSecondaryDescriptor:(SUCoreDescriptor *)arg1 ;
@end

