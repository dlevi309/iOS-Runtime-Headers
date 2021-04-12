/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSSet *)context;
-(void)setOptions:(long long)arg1 ;
-(void)setContext:(NSSet *)arg1 ;
-(NSURL *)serverURL;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(NSString *)advertisingSection;
-(NSString *)authenticationUserName;
-(int)creativeType;
-(void)setCreativeType:(int)arg1 ;
-(void)setContainerWidth:(float)arg1 ;
-(void)setContainerHeight:(float)arg1 ;
-(void)setReorientedContainerWidth:(float)arg1 ;
-(void)setReorientedContainerHeight:(float)arg1 ;
-(float)containerWidth;
-(float)containerHeight;
-(void)setAdSpaceContextJSON:(NSString *)arg1 ;
-(NSString *)adSpaceContextJSON;
-(float)reorientedContainerWidth;
-(float)reorientedContainerHeight;
@end

