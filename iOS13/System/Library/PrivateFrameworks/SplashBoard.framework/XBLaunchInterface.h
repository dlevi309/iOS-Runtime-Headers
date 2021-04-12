/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface XBLaunchInterface : NSObject <BSXPCCoding, NSSecureCoding> {

	BOOL _default;
	unsigned long long _type;
	NSString* _name;
	NSString* _identifier;
	NSArray* _urlSchemes;

}

@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,getter=_isDefault,nonatomic) BOOL _default;              //@synthesize default=_default - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * urlSchemes;                         //@synthesize urlSchemes=_urlSchemes - In the implementation block
@property (nonatomic,readonly) BOOL isXIB; 
@property (nonatomic,readonly) BOOL isStoryboard; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(NSString *)name;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)_isDefault;
-(id)initWithType:(unsigned long long)arg1 name:(id)arg2 identifier:(id)arg3 urlSchemes:(id)arg4 isDefault:(BOOL)arg5 ;
-(BOOL)isStoryboard;
-(BOOL)isXIB;
-(void)set_default:(BOOL)arg1 ;
-(NSArray *)urlSchemes;
-(void)setUrlSchemes:(NSArray *)arg1 ;
@end

