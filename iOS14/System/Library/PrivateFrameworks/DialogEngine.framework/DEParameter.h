/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEParameter : NSObject {

	shared_ptr<siri::dialogengine::Parameter>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Parameter>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSString * type; 
@property (retain) NSString * description; 
-(shared_ptr<siri::dialogengine::Parameter>*)This;
-(id)init;
-(void)setType:(NSString *)arg1 ;
-(NSString *)name;
-(void)setThis:(shared_ptr<siri::dialogengine::Parameter>*)arg1 ;
-(NSString *)description;
-(NSString *)type;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Parameter>*)arg1 ;
-(shared_ptr<siri::dialogengine::Parameter>*)getSharedPtr;
-(void)setName:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
@end

