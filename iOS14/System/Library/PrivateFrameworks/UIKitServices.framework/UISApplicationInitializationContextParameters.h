/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSArray, NSString;

@interface UISApplicationInitializationContextParameters : NSObject <BSXPCCoding> {

	unsigned long long _supportedInterfaceOrientations;
	NSArray* _deviceFamilies;
	BOOL _requiresFullScreen;
	BOOL _supportsMultiwindow;

}

@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations;              //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (nonatomic,copy) NSArray * deviceFamilies;                                         //@synthesize deviceFamilies=_deviceFamilies - In the implementation block
@property (assign,nonatomic) BOOL requiresFullScreen;                                        //@synthesize requiresFullScreen=_requiresFullScreen - In the implementation block
@property (assign,nonatomic) BOOL supportsMultiwindow;                                       //@synthesize supportsMultiwindow=_supportsMultiwindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)deviceFamilies;
-(void)setSupportsMultiwindow:(BOOL)arg1 ;
-(BOOL)supportsMultiwindow;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setDeviceFamilies:(NSArray *)arg1 ;
-(BOOL)requiresFullScreen;
-(void)setRequiresFullScreen:(BOOL)arg1 ;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
@end

