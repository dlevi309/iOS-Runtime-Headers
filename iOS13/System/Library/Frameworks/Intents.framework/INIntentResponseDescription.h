/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INIntentResponseDescriptionExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface INIntentResponseDescription : NSObject <INIntentResponseDescriptionExport, NSCopying> {

	BOOL _isPrivate;
	NSString* _name;
	Class _facadeClass;
	Class _dataClass;
	NSString* _type;
	NSDictionary* _slotsByName;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) Class facadeClass;                            //@synthesize facadeClass=_facadeClass - In the implementation block
@property (nonatomic,readonly) Class dataClass;                              //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                               //@synthesize isPrivate=_isPrivate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * slotsByName;              //@synthesize slotsByName=_slotsByName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(Class)dataClass;
-(BOOL)isPrivate;
-(Class)facadeClass;
-(NSDictionary *)slotsByName;
-(id)initWithName:(id)arg1 facadeClass:(Class)arg2 dataClass:(Class)arg3 type:(id)arg4 isPrivate:(BOOL)arg5 slotsByName:(id)arg6 ;
@end

