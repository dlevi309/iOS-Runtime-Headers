/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface RBSTerminateContext : NSObject <RBSXPCSecureCoding, NSCopying> {

	unsigned char _maximumTerminationResistance;
	BOOL _preventIfBeingDebugged;
	unsigned _exceptionDomain;
	NSString* _explanation;
	unsigned long long _reportType;
	unsigned long long _exceptionCode;
	NSArray* _attributes;

}

@property (nonatomic,copy) NSArray * attributes;                                      //@synthesize attributes=_attributes - In the implementation block
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
+(BOOL)supportsRBSXPCSecureCoding;
+(id)defaultContextWithExplanation:(id)arg1 ;
-(void)setExplanation:(NSString *)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(void)setAttributes:(NSArray *)arg1 ;
-(id)initWithExplanation:(id)arg1 ;
-(void)setReportType:(unsigned long long)arg1 ;
-(void)setPreventIfBeingDebugged:(BOOL)arg1 ;
-(unsigned long long)reportType;
-(void)setExceptionCode:(unsigned long long)arg1 ;
-(void)setMaximumTerminationResistance:(unsigned char)arg1 ;
-(unsigned)exceptionDomain;
-(unsigned long long)exceptionCode;
-(unsigned char)maximumTerminationResistance;
-(BOOL)preventIfBeingDebugged;
-(void)setExceptionDomain:(unsigned)arg1 ;
-(BOOL)shouldTerminatePlugIns;
-(NSArray *)attributes;
-(NSString *)description;
-(unsigned long long)hash;
-(NSString *)explanation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

