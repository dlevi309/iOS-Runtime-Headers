/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class PMLSessionDescriptor;

@interface SGModelSource : NSObject {

	PMLSessionDescriptor* _sessionDescriptor;
	Class _modelClass;

}

@property (nonatomic,retain) PMLSessionDescriptor * sessionDescriptor;              //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,retain) Class modelClass;                                      //@synthesize modelClass=_modelClass - In the implementation block
-(void)setModelClass:(Class)arg1 ;
-(Class)modelClass;
-(PMLSessionDescriptor *)sessionDescriptor;
-(void)setSessionDescriptor:(PMLSessionDescriptor *)arg1 ;
-(id)initWithSessionDescriptor:(id)arg1 modelClass:(Class)arg2 ;
@end

