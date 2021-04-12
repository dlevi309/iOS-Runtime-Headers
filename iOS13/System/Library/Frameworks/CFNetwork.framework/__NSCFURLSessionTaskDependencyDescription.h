/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/NSURLSessionTaskDependencyDescription.h>

@class __NSURLSessionTaskDependencyResourceIdentifier;

@interface __NSCFURLSessionTaskDependencyDescription : NSURLSessionTaskDependencyDescription {

	float _priority;
	BOOL _exclusive;
	__NSURLSessionTaskDependencyResourceIdentifier* _dependent;
	__NSURLSessionTaskDependencyResourceIdentifier* _parent;

}
-(void)dealloc;
-(id)description;
-(id)_parent;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(id)_dependent;
-(id)initWithPriority:(float)arg1 exclusive:(BOOL)arg2 ;
-(id)initWithURLPath:(id)arg1 mimeType:(id)arg2 parentURLPath:(id)arg3 parentMimeType:(id)arg4 priority:(float)arg5 exclusive:(BOOL)arg6 ;
-(BOOL)exclusive;
-(void)setExclusive:(BOOL)arg1 ;
-(void)set_dependent:(id)arg1 ;
-(void)set_parent:(id)arg1 ;
@end

