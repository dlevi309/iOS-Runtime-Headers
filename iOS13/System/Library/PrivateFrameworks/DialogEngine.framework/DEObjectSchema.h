/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)name;
-(NSString *)baseObject;
-(void)setThis:(ObjectSchema*)arg1 ;
-(ObjectSchema*)This;
-(id)initWithPtr:(ObjectSchema*)arg1 ;
-(id)propertyNames:(id)arg1 ;
-(id)property:(id)arg1 name:(id)arg2 ;
-(id)inputNames:(id)arg1 ;
-(id)input:(id)arg1 name:(id)arg2 ;
@end

