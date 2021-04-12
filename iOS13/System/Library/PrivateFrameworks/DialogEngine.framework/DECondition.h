/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSArray;

@interface DECondition : NSObject {

	shared_ptr<siri::dialogengine::Condition>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Condition>* This;              //@synthesize This=_This - In the implementation block
@property (assign) NSString * name; 
@property (assign) NSArray * entries; 
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)addEntry:(id)arg1 ;
-(BOOL)validate:(id)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(NSArray *)entries;
-(BOOL)evaluate:(id)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Condition>*)arg1 ;
-(shared_ptr<siri::dialogengine::Condition>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Condition>*)arg1 ;
-(shared_ptr<siri::dialogengine::Condition>*)getSharedPtr;
@end

