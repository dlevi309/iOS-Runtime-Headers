/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEParameter : NSObject {

	shared_ptr<siri::dialogengine::Parameter>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Parameter>* This;              //@synthesize This=_This - In the implementation block
@property (assign) NSString * name; 
@property (assign) NSString * type; 
@property (assign) NSString * description; 
-(id)init;
-(NSString *)description;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Parameter>*)arg1 ;
-(shared_ptr<siri::dialogengine::Parameter>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Parameter>*)arg1 ;
-(shared_ptr<siri::dialogengine::Parameter>*)getSharedPtr;
@end

