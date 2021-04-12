/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEObjectSchema : NSObject {

	ObjectSchema* _This;

}

@property (assign) ObjectSchema* This;                   //@synthesize This=_This - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSString * baseObject; 
+(id)schema:(id)arg1 typeName:(id)arg2 ;
-(ObjectSchema*)This;
-(id)init;
-(NSString *)name;
-(void)setThis:(ObjectSchema*)arg1 ;
-(NSString *)baseObject;
-(id)propertyNames:(id)arg1 ;
-(id)property:(id)arg1 name:(id)arg2 ;
-(id)inputNames:(id)arg1 ;
-(id)input:(id)arg1 name:(id)arg2 ;
-(id)initWithPtr:(ObjectSchema*)arg1 ;
@end

