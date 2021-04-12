/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBSApplicationLibraryConfiguration : NSObject <NSCopying> {

	Class _applicationInfoClass;
	Class _applicationPlaceholderClass;
	BOOL _allowConcurrentLoading;
	/*^block*/id _installedApplicationFilter;
	/*^block*/id _placeholderFilter;

}

@property (nonatomic,retain) Class applicationInfoClass;                     //@synthesize applicationInfoClass=_applicationInfoClass - In the implementation block
@property (nonatomic,retain) Class applicationPlaceholderClass;              //@synthesize applicationPlaceholderClass=_applicationPlaceholderClass - In the implementation block
@property (assign,nonatomic) BOOL allowConcurrentLoading;                    //@synthesize allowConcurrentLoading=_allowConcurrentLoading - In the implementation block
@property (nonatomic,copy) id installedApplicationFilter;                    //@synthesize installedApplicationFilter=_installedApplicationFilter - In the implementation block
@property (nonatomic,copy) id placeholderFilter;                             //@synthesize placeholderFilter=_placeholderFilter - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)applicationInfoClass;
-(Class)applicationPlaceholderClass;
-(id)installedApplicationFilter;
-(id)placeholderFilter;
-(BOOL)allowConcurrentLoading;
-(void)setApplicationInfoClass:(Class)arg1 ;
-(void)setApplicationPlaceholderClass:(Class)arg1 ;
-(void)setAllowConcurrentLoading:(BOOL)arg1 ;
-(void)setInstalledApplicationFilter:(id)arg1 ;
-(void)setPlaceholderFilter:(id)arg1 ;
@end

