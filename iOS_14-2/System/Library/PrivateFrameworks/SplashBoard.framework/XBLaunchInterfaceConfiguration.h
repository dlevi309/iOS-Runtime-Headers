/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface XBLaunchInterfaceConfiguration : NSObject <BSXPCCoding, NSSecureCoding> {

	BOOL _imageRespectsSafeAreaInsets;
	NSString* _colorName;
	NSString* _imageName;
	NSArray* _bars;
	NSString* _navigationBarImageName;
	NSString* _toolbarImageName;
	NSString* _tabBarImageName;

}

@property (nonatomic,copy,readonly) NSString * colorName;                           //@synthesize colorName=_colorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName;                           //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,readonly) BOOL imageRespectsSafeAreaInsets;                    //@synthesize imageRespectsSafeAreaInsets=_imageRespectsSafeAreaInsets - In the implementation block
@property (nonatomic,readonly) NSArray * bars;                                      //@synthesize bars=_bars - In the implementation block
@property (nonatomic,copy,readonly) NSString * navigationBarImageName;              //@synthesize navigationBarImageName=_navigationBarImageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * toolbarImageName;                    //@synthesize toolbarImageName=_toolbarImageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * tabBarImageName;                     //@synthesize tabBarImageName=_tabBarImageName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)imageName;
-(NSArray *)bars;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)colorName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(BOOL)imageRespectsSafeAreaInsets;
-(NSString *)navigationBarImageName;
-(NSString *)toolbarImageName;
-(NSString *)tabBarImageName;
@end

