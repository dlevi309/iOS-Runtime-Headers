/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBIconModelStore.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSURL, NSString;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore, BSDescriptionProviding> {

	NSURL* _currentIconStateURL;
	NSURL* _desiredIconStateURL;

}

@property (nonatomic,copy,readonly) NSURL * currentIconStateURL;              //@synthesize currentIconStateURL=_currentIconStateURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * desiredIconStateURL;              //@synthesize desiredIconStateURL=_desiredIconStateURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)loadDesiredIconState:(id*)arg1 ;
-(id)loadCurrentIconState:(id*)arg1 ;
-(BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)saveDesiredIconState:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveCurrentIconState:(id)arg1 error:(id*)arg2 ;
-(id)initWithIconStateURL:(id)arg1 desiredIconStateURL:(id)arg2 ;
-(BOOL)_save:(id)arg1 url:(id)arg2 error:(id*)arg3 ;
-(BOOL)_delete:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_load:(id)arg1 error:(id*)arg2 ;
-(NSURL *)currentIconStateURL;
-(NSURL *)desiredIconStateURL;
@end

