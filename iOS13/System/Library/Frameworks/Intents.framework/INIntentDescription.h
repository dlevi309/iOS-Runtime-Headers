/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INIntentDescriptionExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface INIntentDescription : NSObject <INIntentDescriptionExport, NSCopying> {

	NSDictionary* _slotsByName;
	NSDictionary* _alternativeSlotNames;
	BOOL _isPrivate;
	NSString* _name;
	NSString* _responseName;
	Class _facadeClass;
	Class _dataClass;
	NSString* _type;
	SEL _handleSelector;
	SEL _confirmSelector;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseName;                 //@synthesize responseName=_responseName - In the implementation block
@property (nonatomic,readonly) Class facadeClass;                            //@synthesize facadeClass=_facadeClass - In the implementation block
@property (nonatomic,readonly) Class dataClass;                              //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                               //@synthesize isPrivate=_isPrivate - In the implementation block
@property (nonatomic,readonly) SEL handleSelector;                           //@synthesize handleSelector=_handleSelector - In the implementation block
@property (nonatomic,readonly) SEL confirmSelector;                          //@synthesize confirmSelector=_confirmSelector - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * slotsByName; 
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
-(NSString *)responseName;
-(Class)facadeClass;
-(SEL)handleSelector;
-(SEL)confirmSelector;
-(id)initWithName:(id)arg1 responseName:(id)arg2 facadeClass:(Class)arg3 dataClass:(Class)arg4 type:(id)arg5 isPrivate:(BOOL)arg6 handleSelector:(SEL)arg7 confirmSelector:(SEL)arg8 slotsByName:(id)arg9 ;
-(id)slotByName:(id)arg1 ;
-(id)slotDescriptions;
-(NSDictionary *)slotsByName;
@end

