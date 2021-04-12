/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBIconModelStore.h>

@class NSDictionary, NSString;

@interface SBIconProfileModelMemoryStore : NSObject <SBIconModelStore> {

	NSDictionary* _currentState;
	NSDictionary* _desiredState;

}

@property (nonatomic,copy) NSDictionary * currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy) NSDictionary * desiredState;              //@synthesize desiredState=_desiredState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentState:(NSDictionary *)arg1 ;
-(BOOL)saveCurrentIconState:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)init;
-(NSDictionary *)currentState;
-(BOOL)saveDesiredIconState:(id)arg1 error:(id*)arg2 ;
-(void)setDesiredState:(NSDictionary *)arg1 ;
-(id)initWithCurrentState:(id)arg1 desiredState:(id)arg2 ;
-(NSDictionary *)desiredState;
-(id)loadCurrentIconState:(id*)arg1 ;
-(id)loadDesiredIconState:(id*)arg1 ;
-(BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithITunesRepresentation:(id)arg1 ;
@end

