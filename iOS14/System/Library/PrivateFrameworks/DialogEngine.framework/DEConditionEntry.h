/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@interface DEConditionEntry : NSObject {

	shared_ptr<siri::dialogengine::ConditionEntry>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::ConditionEntry>* This;              //@synthesize This=_This - In the implementation block
@property (assign) int type; 
-(BOOL)validate:(id)arg1 ;
-(shared_ptr<siri::dialogengine::ConditionEntry>*)This;
-(id)init;
-(void)setType:(int)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::ConditionEntry>*)arg1 ;
-(void*)getRawSharedPtr;
-(int)type;
-(id)initWithSharedPtr:(void*)arg1 ;
-(BOOL)evaluate:(id)arg1 ;
@end

