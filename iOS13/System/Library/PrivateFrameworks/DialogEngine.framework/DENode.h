/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DENode : NSObject {

	shared_ptr<siri::dialogengine::Node>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Node>* This;              //@synthesize This=_This - In the implementation block
@property (assign) NSString * conditionName; 
-(id)init;
-(void)setConditionName:(NSString *)arg1 ;
-(NSString *)conditionName;
-(void)setThis:(shared_ptr<siri::dialogengine::Node>*)arg1 ;
-(shared_ptr<siri::dialogengine::Node>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Node>*)arg1 ;
-(shared_ptr<siri::dialogengine::Node>*)getSharedPtr;
-(BOOL)isOfType:(unsigned long long)arg1 ;
-(id)getDialog;
@end

