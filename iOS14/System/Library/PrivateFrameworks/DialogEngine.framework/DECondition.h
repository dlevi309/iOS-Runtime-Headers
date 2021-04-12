/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSArray;

@interface DECondition : NSObject {

	shared_ptr<siri::dialogengine::Condition>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Condition>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSArray * entries; 
-(BOOL)validate:(id)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(shared_ptr<siri::dialogengine::Condition>*)This;
-(id)init;
-(NSArray *)entries;
-(NSString *)name;
-(void)setThis:(shared_ptr<siri::dialogengine::Condition>*)arg1 ;
-(void)addEntry:(id)arg1 ;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Condition>*)arg1 ;
-(shared_ptr<siri::dialogengine::Condition>*)getSharedPtr;
-(BOOL)evaluate:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

