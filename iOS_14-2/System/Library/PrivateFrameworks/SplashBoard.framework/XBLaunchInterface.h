/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, XBLaunchInterfaceConfiguration;

@interface XBLaunchInterface : NSObject <BSXPCCoding, NSSecureCoding> {

	BOOL _default;
	unsigned long long _type;
	NSString* _name;
	NSString* _identifier;
	NSArray* _urlSchemes;
	XBLaunchInterfaceConfiguration* _configuration;

}

@property (assign,nonatomic) unsigned long long type;                                       //@synthesize type=_type - In the implementation block
@property (assign,getter=_isDefault,nonatomic) BOOL _default;                               //@synthesize default=_default - In the implementation block
@property (nonatomic,copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * urlSchemes;                                          //@synthesize urlSchemes=_urlSchemes - In the implementation block
@property (nonatomic,readonly) XBLaunchInterfaceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL isXIB; 
@property (nonatomic,readonly) BOOL isStoryboard; 
@property (nonatomic,readonly) BOOL isConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSArray *)urlSchemes;
-(BOOL)isConfiguration;
-(BOOL)isXIB;
-(BOOL)_isDefault;
-(BOOL)isStoryboard;
-(void)setUrlSchemes:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(XBLaunchInterfaceConfiguration *)configuration;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 name:(id)arg2 identifier:(id)arg3 urlSchemes:(id)arg4 isDefault:(BOOL)arg5 ;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)set_default:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithConfiguration:(id)arg1 identifier:(id)arg2 urlSchemes:(id)arg3 isDefault:(BOOL)arg4 ;
@end

