/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBIconModelStore.h>

@class NSDictionary, NSString;

@interface SBIconModelMemoryStore : NSObject <SBIconModelStore> {

	NSDictionary* _currentState;
	NSDictionary* _desiredState;

}

@property (nonatomic,copy) NSDictionary * currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy) NSDictionary * desiredState;              //@synthesize desiredState=_desiredState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDictionary *)currentState;
-(void)setCurrentState:(NSDictionary *)arg1 ;
-(BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)loadDesiredIconState:(id*)arg1 ;
-(id)loadCurrentIconState:(id*)arg1 ;
-(BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)saveDesiredIconState:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveCurrentIconState:(id)arg1 error:(id*)arg2 ;
-(void)setDesiredState:(NSDictionary *)arg1 ;
-(id)initWithCurrentState:(id)arg1 desiredState:(id)arg2 ;
-(NSDictionary *)desiredState;
@end

