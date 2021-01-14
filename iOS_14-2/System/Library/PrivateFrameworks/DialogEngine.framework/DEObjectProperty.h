/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSArray;

@interface DEObjectProperty : NSObject {

	ObjectProperty* _This;
	shared_ptr<siri::dialogengine::ObjectProperty>* _ThisShared;

}

@property (assign) shared_ptr<siri::dialogengine::ObjectProperty>* ThisShared;              //@synthesize ThisShared=_ThisShared - In the implementation block
@property (assign) ObjectProperty* This;                                                    //@synthesize This=_This - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSString * type; 
@property (readonly) NSString * description; 
@property (readonly) NSArray * sampleValueLocales; 
-(ObjectProperty*)This;
-(id)init;
-(NSString *)name;
-(void)setThis:(ObjectProperty*)arg1 ;
-(NSString *)description;
-(NSString *)type;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::ObjectProperty>*)arg1 ;
-(id)initWithPtr:(ObjectProperty*)arg1 ;
-(void)setThisShared:(shared_ptr<siri::dialogengine::ObjectProperty>*)arg1 ;
-(shared_ptr<siri::dialogengine::ObjectProperty>*)ThisShared;
-(id)sampleValuesForLocale:(id)arg1 ;
-(NSArray *)sampleValueLocales;
@end

