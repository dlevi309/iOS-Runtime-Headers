/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentInserterManager.h>

@protocol SXComponentInserterManager <SXComponentInserterProvider>
@required
-(void)addInserter:(id)arg1;
-(void)removeInserter:(id)arg1;

@end


@class NSMutableArray, NSString, NSArray;

@interface SXComponentInserterManager : NSObject <SXComponentInserterManager> {

	NSMutableArray* _mutableInserters;

}

@property (nonatomic,readonly) NSMutableArray * mutableInserters;              //@synthesize mutableInserters=_mutableInserters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * inserters; 
-(id)init;
-(NSMutableArray *)mutableInserters;
-(NSArray *)inserters;
-(void)addInserter:(id)arg1 ;
-(void)removeInserter:(id)arg1 ;
@end

