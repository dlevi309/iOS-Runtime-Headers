/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSProcess;
@class NSString;

@interface FBSProcessTerminationRequest : NSObject <NSCopying, BSDescriptionProviding> {

	id<FBSProcess> _process;
	NSString* _label;
	unsigned long long _options;
	long long _reportType;
	long long _exceptionCode;
	NSString* _explanation;

}

@property (nonatomic,copy) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) id<FBSProcess> process;              //@synthesize process=_process - In the implementation block
@property (assign,nonatomic) unsigned long long options;                 //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long reportType;                       //@synthesize reportType=_reportType - In the implementation block
@property (assign,nonatomic) long long exceptionCode;                    //@synthesize exceptionCode=_exceptionCode - In the implementation block
@property (nonatomic,copy) NSString * explanation;                       //@synthesize explanation=_explanation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestForProcess:(id)arg1 withLabel:(id)arg2 ;
-(id<FBSProcess>)process;
-(void)execute;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setProcess:(id<FBSProcess>)arg1 ;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)options;
-(void)setReportType:(long long)arg1 ;
-(long long)reportType;
-(void)setExceptionCode:(long long)arg1 ;
-(long long)exceptionCode;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSString *)description;
-(NSString *)explanation;
-(void)setLabel:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
@end

