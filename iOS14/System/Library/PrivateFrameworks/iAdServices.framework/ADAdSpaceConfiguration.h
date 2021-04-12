/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/

#import <iAdServices/iAdServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSSet;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding, NSCopying> {

	int _creativeType;
	float _containerWidth;
	float _containerHeight;
	float _reorientedContainerWidth;
	float _reorientedContainerHeight;
	long long _options;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _advertisingSection;
	NSString* _authenticationUserName;
	NSSet* _context;
	NSString* _adSpaceContextJSON;

}

@property (assign,nonatomic) int creativeType;                               //@synthesize creativeType=_creativeType - In the implementation block
@property (assign,nonatomic) long long options;                              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSURL * serverURL;                              //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,retain) NSString * advertisingSection;                  //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,retain) NSString * authenticationUserName;              //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSSet * context;                                  //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * adSpaceContextJSON;                    //@synthesize adSpaceContextJSON=_adSpaceContextJSON - In the implementation block
@property (assign,nonatomic) float containerWidth;                           //@synthesize containerWidth=_containerWidth - In the implementation block
@property (assign,nonatomic) float containerHeight;                          //@synthesize containerHeight=_containerHeight - In the implementation block
@property (assign,nonatomic) float reorientedContainerWidth;                 //@synthesize reorientedContainerWidth=_reorientedContainerWidth - In the implementation block
@property (assign,nonatomic) float reorientedContainerHeight;                //@synthesize reorientedContainerHeight=_reorientedContainerHeight - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setContainerHeight:(float)arg1 ;
-(void)setReorientedContainerHeight:(float)arg1 ;
-(void)setServerURL:(NSURL *)arg1 ;
-(float)reorientedContainerHeight;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)options;
-(float)reorientedContainerWidth;
-(NSSet *)context;
-(void)setOptions:(long long)arg1 ;
-(NSURL *)serverURL;
-(void)setContainerWidth:(float)arg1 ;
-(void)setAdSpaceContextJSON:(NSString *)arg1 ;
-(NSString *)advertisingSection;
-(NSString *)authenticationUserName;
-(id)initWithCoder:(id)arg1 ;
-(int)creativeType;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(void)setCreativeType:(int)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(NSString *)adSpaceContextJSON;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReorientedContainerWidth:(float)arg1 ;
-(void)dealloc;
-(float)containerHeight;
-(float)containerWidth;
-(void)setContext:(NSSet *)arg1 ;
@end

