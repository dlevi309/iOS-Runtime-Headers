/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPProviderDomain.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSURL, NSFileProviderDomain;

@interface FPProvider : FPProviderDomain <NSSecureCoding> {

	NSArray* _supportedSortDescriptors;
	long long _type;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * providerIdentifier; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSURL * bundleURL; 
@property (nonatomic,readonly) NSURL * storageURL; 
@property (nonatomic,readonly) NSFileProviderDomain * domain; 
@property (nonatomic,readonly) NSArray * supportedSortDescriptors;              //@synthesize supportedSortDescriptors=_supportedSortDescriptors - In the implementation block
@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)beginMonitoringProviderChangesWithHandler:(/*^block*/id)arg1 ;
+(void)fetchProviderForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)endMonitoringProviderChanges:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)providerIdentifier;
-(NSURL *)bundleURL;
-(NSArray *)supportedSortDescriptors;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)storageURL;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)localizedTitleForSortDescriptor:(id)arg1 ;
@end

