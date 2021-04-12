/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


@protocol TRIPaths;
@interface TRINamespaceStatusProvider : NSObject {

	id<TRIPaths> _paths;

}
-(id)initWithPaths:(id)arg1 ;
-(BOOL)saveStatus:(id)arg1 ;
-(id)urlForStatusWithNamespaceName:(id)arg1 ;
-(id)loadNamespaceStatusFromURL:(id)arg1 ;
-(BOOL)saveNamespaceStatus:(id)arg1 toURL:(id)arg2 ;
-(id)statusForNamespaceWithName:(id)arg1 ;
-(BOOL)deleteStatusForNamespaceWithName:(id)arg1 ;
-(BOOL)updateStatusForNamespaceWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

