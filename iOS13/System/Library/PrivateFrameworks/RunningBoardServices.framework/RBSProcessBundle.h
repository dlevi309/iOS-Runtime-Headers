/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@protocol RBSProcessBundleDataSource;
@class NSDictionary, NSString, RBSProcessInstance;

@interface RBSProcessBundle : NSObject <BSXPCSecureCoding> {

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
+(BOOL)supportsBSXPCSecureCoding;
+(id)bundleWithDataSource:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)identifier;
-(NSString *)path;
-(NSString *)executablePath;
-(NSString *)extensionPointIdentifier;
-(id<RBSProcessBundleDataSource>)dataSource;
-(RBSProcessInstance *)instance;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)bundleInfoValuesForKeys:(id)arg1 ;
-(id)bundleInfoValueForKey:(id)arg1 ;
-(void)setInstance:(RBSProcessInstance *)arg1 ;
@end

