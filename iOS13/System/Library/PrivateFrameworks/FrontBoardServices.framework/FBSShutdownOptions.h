/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(long long)arg1 ;
-(NSString *)reason;
-(long long)source;
-(id)initWithReason:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id<NSCopying>)localContext;
-(void)setLocalContext:(id<NSCopying>)arg1 ;
-(void)setRebootType:(long long)arg1 ;
-(BOOL)isUserInitiated;
-(void)setLPEMOption:(long long)arg1 ;
-(BOOL)isShutdown;
-(BOOL)isReboot;
-(long long)rebootType;
-(long long)LPEMOption;
@end

