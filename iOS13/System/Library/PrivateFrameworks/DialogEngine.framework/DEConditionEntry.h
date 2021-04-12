/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@interface DEConditionEntry : NSObject {

	shared_ptr<siri::dialogengine::ConditionEntry>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::ConditionEntry>* This;              //@synthesize This=_This - In the implementation block
@property (assign) int type; 
-(id)init;
-(int)type;
-(void)setType:(int)arg1 ;
-(BOOL)validate:(id)arg1 ;
-(BOOL)evaluate:(id)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::ConditionEntry>*)arg1 ;
-(shared_ptr<siri::dialogengine::ConditionEntry>*)This;
-(id)initWithSharedPtr:(void*)arg1 ;
-(void*)getRawSharedPtr;
@end

