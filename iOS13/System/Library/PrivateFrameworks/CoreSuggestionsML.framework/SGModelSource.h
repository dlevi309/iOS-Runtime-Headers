/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class PMLSessionDescriptor;

@interface SGModelSource : NSObject {

	PMLSessionDescriptor* _sessionDescriptor;
	Class _modelClass;

}

@property (nonatomic,retain) PMLSessionDescriptor * sessionDescriptor;              //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,retain) Class modelClass;                                      //@synthesize modelClass=_modelClass - In the implementation block
-(Class)modelClass;
-(void)setModelClass:(Class)arg1 ;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id)initWithSessionDescriptor:(id)arg1 modelClass:(Class)arg2 ;
-(void)setSessionDescriptor:(PMLSessionDescriptor *)arg1 ;
@end

