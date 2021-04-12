/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEVariable : NSObject {

	shared_ptr<siri::dialogengine::Variable>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Variable>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSString * type; 
-(shared_ptr<siri::dialogengine::Variable>*)This;
-(id)init;
-(id)toString:(int)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)name;
-(void)setThis:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(NSString *)type;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(shared_ptr<siri::dialogengine::Variable>*)getSharedPtr;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEmpty;
@end

