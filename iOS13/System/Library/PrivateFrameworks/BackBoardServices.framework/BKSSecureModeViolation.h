/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSNumber, NSArray, NSDictionary, NSString;

@interface BKSSecureModeViolation : NSObject <BSDescriptionProviding> {

	NSNumber* _processId;
	NSArray* _contextIds;
	NSDictionary* _layerNamesByContext;

}

@property (nonatomic,retain) NSNumber * processId;                          //@synthesize processId=_processId - In the implementation block
@property (nonatomic,copy) NSArray * contextIds;                            //@synthesize contextIds=_contextIds - In the implementation block
@property (nonatomic,copy) NSDictionary * layerNamesByContext;              //@synthesize layerNamesByContext=_layerNamesByContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSNumber *)processId;
-(id)initWithProcessId:(id)arg1 contextIds:(id)arg2 ;
-(void)setProcessId:(NSNumber *)arg1 ;
-(NSArray *)contextIds;
-(void)setContextIds:(NSArray *)arg1 ;
-(NSDictionary *)layerNamesByContext;
-(void)setLayerNamesByContext:(NSDictionary *)arg1 ;
@end

