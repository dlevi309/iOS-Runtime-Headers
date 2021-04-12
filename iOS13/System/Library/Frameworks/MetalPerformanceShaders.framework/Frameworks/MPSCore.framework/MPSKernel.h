/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPSKernel : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _options;
	MPSDevice* _device;
	MPSLibrary* _library;
	NSString* _label;
	BOOL _enableConcurrency;
	unsigned long long _allowedOptions;
	unsigned _tuningParams;
	unsigned _maxTuningParams;
	SCD_Union_MP18 _fileVersion;
	unsigned _privateOptions;

}

@property (assign,nonatomic) BOOL enableConcurrency;                             //@synthesize enableConcurrency=_enableConcurrency - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* fileVersion;              //@synthesize fileVersion=_fileVersion - In the implementation block
@property (assign,nonatomic) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (copy) NSString * label;                                               //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
+(const MPSLibraryInfo*)libraryInfo;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(id<MTLDevice>)device;
-(id)debugQuickLookObject;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(BOOL)enableConcurrency;
-(void)setEnableConcurrency:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)sharedInitWithDevice:(id)arg1 ;
-(BOOL)disableConcurrentEncoder;
-(/*function pointer*/void*)fileVersion;
-(void)setFileVersion:(/*function pointer*/void*)arg1 ;
@end

