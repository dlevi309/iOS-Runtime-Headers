/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)execute;
-(id<FBSProcess>)process;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)explanation;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setReportType:(long long)arg1 ;
-(void)setExceptionCode:(long long)arg1 ;
-(long long)exceptionCode;
-(long long)reportType;
-(void)setProcess:(id<FBSProcess>)arg1 ;
@end

