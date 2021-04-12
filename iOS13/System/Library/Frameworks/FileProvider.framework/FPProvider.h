/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)endMonitoringProviderChanges:(id)arg1 ;
+(void)fetchProviderForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)bundleURL;
-(NSString *)providerIdentifier;
-(NSString *)localizedName;
-(NSURL *)storageURL;
-(id)localizedTitleForSortDescriptor:(id)arg1 ;
-(NSArray *)supportedSortDescriptors;
@end

