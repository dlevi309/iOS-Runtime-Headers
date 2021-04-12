/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSSet;

@interface RBSTerminateContext : NSObject <BSXPCSecureCoding, NSCopying> {

	unsigned char _maximumTerminationResistance;
	BOOL _graceful;
	unsigned char _maximumRole;
	BOOL _preventIfBeingDebugged;
	unsigned _exceptionDomain;
	NSString* _explanation;
	unsigned long long _reportType;
	unsigned long long _exceptionCode;
	NSArray* _attributes;
	NSSet* _preventingEndowmentNamespaces;

}

@property (nonatomic,copy) NSArray * attributes;                                      //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL graceful;                                           //@synthesize graceful=_graceful - In the implementation block
@property (assign,nonatomic) unsigned char maximumRole;                               //@synthesize maximumRole=_maximumRole - In the implementation block
@property (nonatomic,retain) NSSet * preventingEndowmentNamespaces;                   //@synthesize preventingEndowmentNamespaces=_preventingEndowmentNamespaces - In the implementation block
@property (assign,nonatomic) BOOL preventIfBeingDebugged;                             //@synthesize preventIfBeingDebugged=_preventIfBeingDebugged - In the implementation block
@property (nonatomic,copy) NSString * explanation;                                    //@synthesize explanation=_explanation - In the implementation block
@property (assign,nonatomic) unsigned long long reportType;                           //@synthesize reportType=_reportType - In the implementation block
@property (assign,nonatomic) unsigned exceptionDomain;                                //@synthesize exceptionDomain=_exceptionDomain - In the implementation block
@property (assign,nonatomic) unsigned long long exceptionCode;                        //@synthesize exceptionCode=_exceptionCode - In the implementation block
@property (assign,nonatomic) unsigned char maximumTerminationResistance;              //@synthesize maximumTerminationResistance=_maximumTerminationResistance - In the implementation block
@property (nonatomic,readonly) BOOL shouldTerminatePlugIns; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultContext;
+(BOOL)supportsBSXPCSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setReportType:(unsigned long long)arg1 ;
-(void)setGraceful:(BOOL)arg1 ;
-(void)setPreventIfBeingDebugged:(BOOL)arg1 ;
-(void)setExceptionCode:(unsigned long long)arg1 ;
-(void)setMaximumRole:(unsigned char)arg1 ;
-(void)setMaximumTerminationResistance:(unsigned char)arg1 ;
-(unsigned)exceptionDomain;
-(unsigned long long)exceptionCode;
-(BOOL)graceful;
-(unsigned char)maximumRole;
-(unsigned char)maximumTerminationResistance;
-(BOOL)preventIfBeingDebugged;
-(NSSet *)preventingEndowmentNamespaces;
-(unsigned long long)reportType;
-(void)setExceptionDomain:(unsigned)arg1 ;
-(void)setPreventingEndowmentNamespaces:(NSSet *)arg1 ;
-(BOOL)shouldTerminatePlugIns;
@end

