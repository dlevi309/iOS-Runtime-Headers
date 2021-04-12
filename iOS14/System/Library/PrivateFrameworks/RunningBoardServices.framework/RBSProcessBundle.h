/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@protocol RBSProcessBundleDataSource;
@class NSDictionary, NSString, RBSProcessInstance;

@interface RBSProcessBundle : NSObject <RBSXPCSecureCoding> {

	NSDictionary* _plistValues;
	NSString* _identifier;
	NSString* _path;
	NSString* _executablePath;
	NSString* _extensionPointIdentifier;
	id<RBSProcessBundleDataSource> _dataSource;
	RBSProcessInstance* _instance;

}

@property (nonatomic,__weak,readonly) id<RBSProcessBundleDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) RBSProcessInstance * instance;                                   //@synthesize instance=_instance - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                                          //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * executablePath;                                //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier;                      //@synthesize extensionPointIdentifier=_extensionPointIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
+(id)bundleWithDataSource:(id)arg1 ;
-(void)setInstance:(RBSProcessInstance *)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(NSString *)executablePath;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)bundleInfoValueForKey:(id)arg1 ;
-(NSString *)debugDescription;
-(RBSProcessInstance *)instance;
-(id<RBSProcessBundleDataSource>)dataSource;
-(NSString *)path;
-(NSString *)extensionPointIdentifier;
-(NSString *)description;
-(NSString *)identifier;
-(id)bundleInfoValuesForKeys:(id)arg1 ;
@end

