/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEVariable : NSObject {

	shared_ptr<siri::dialogengine::Variable>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Variable>* This;              //@synthesize This=_This - In the implementation block
@property (assign) NSString * name; 
@property (assign) NSString * type; 
-(id)init;
-(NSString *)name;
-(BOOL)isEmpty;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)toString:(int)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(shared_ptr<siri::dialogengine::Variable>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(shared_ptr<siri::dialogengine::Variable>*)getSharedPtr;
@end

