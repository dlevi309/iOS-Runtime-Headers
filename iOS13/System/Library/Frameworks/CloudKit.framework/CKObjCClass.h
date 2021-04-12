/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSString, NSDictionary, NSArray;

@interface CKObjCClass : NSObject {

	Class _handle;
	NSString* _name;
	NSDictionary* _propertiesByName;
	NSArray* _sortedProperties;

}

@property (nonatomic,readonly) NSDictionary * propertiesByName;              //@synthesize propertiesByName=_propertiesByName - In the implementation block
@property (nonatomic,readonly) NSArray * sortedProperties;                   //@synthesize sortedProperties=_sortedProperties - In the implementation block
@property (nonatomic,readonly) Class handle;                                 //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
+(id)classForHandle:(Class)arg1 ;
+(id)classForObject:(id)arg1 ;
-(NSString *)name;
-(Class)handle;
-(NSDictionary *)propertiesByName;
-(id)initWithHandle:(Class)arg1 ;
-(id)propertyForName:(id)arg1 ;
-(id)allProperties;
-(NSArray *)sortedProperties;
@end

