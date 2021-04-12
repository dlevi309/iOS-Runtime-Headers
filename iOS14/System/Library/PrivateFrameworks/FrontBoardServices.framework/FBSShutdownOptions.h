/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSString;

@interface FBSShutdownOptions : NSObject <BSXPCCoding, NSCopying> {

	NSString* _reason;
	long long _rebootType;
	long long _source;
	long long _LPEMOption;
	id<NSCopying> _localContext;

}

@property (assign,nonatomic) long long LPEMOption;                           //@synthesize LPEMOption=_LPEMOption - In the implementation block
@property (assign,nonatomic,__weak) id<NSCopying> localContext;              //@synthesize localContext=_localContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                       //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long rebootType;                           //@synthesize rebootType=_rebootType - In the implementation block
@property (assign,nonatomic) long long source;                               //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL isShutdown; 
@property (nonatomic,readonly) BOOL isReboot; 
@property (nonatomic,readonly) BOOL isUserInitiated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NSCopying>)localContext;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(NSString *)description;
-(void)setRebootType:(long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)reason;
-(long long)LPEMOption;
-(long long)rebootType;
-(BOOL)isShutdown;
-(void)setLPEMOption:(long long)arg1 ;
-(void)setLocalContext:(id<NSCopying>)arg1 ;
-(BOOL)isReboot;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)isUserInitiated;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)source;
@end

