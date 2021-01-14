/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DENode : NSObject {

	shared_ptr<siri::dialogengine::Node>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Node>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * conditionName; 
-(shared_ptr<siri::dialogengine::Node>*)This;
-(id)init;
-(void)setThis:(shared_ptr<siri::dialogengine::Node>*)arg1 ;
-(BOOL)isOfType:(unsigned long long)arg1 ;
-(id)getDialog;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Node>*)arg1 ;
-(shared_ptr<siri::dialogengine::Node>*)getSharedPtr;
-(void)setConditionName:(NSString *)arg1 ;
-(id)getGlobalId:(id)arg1 ;
-(NSString *)conditionName;
@end

